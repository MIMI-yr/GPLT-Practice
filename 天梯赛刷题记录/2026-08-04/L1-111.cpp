#include<bits/stdc++.h>
using namespace std;
using LL=long long;
LL get(LL a,int k,LL limit)
{
    LL ans=1;
    for(int i=0;i<k;i++)
    {
        if(ans>limit/a)return limit+1;
        ans*=a;
    }
    return ans;
}
int main()
{
    LL n;
    cin>>n;
    int ansK=-1;
    int ansM=-1;
    for(int k=30;k>=1;k--)
    {
        LL t=0;
        for(int i=1;;i++)
        {
            LL remain=n-t;
            LL op=get(i,k,remain);
            if(op>remain)break;
            t+=op;
            if(t==n)
            {
                ansK=k;
                ansM=i;
                break;
            }
        }
        if(ansK!=-1)break;
    }
    if(ansK==-1)cout<<"Impossible for "<<n<<".";
    else 
    {
        for(int i=1;i<=ansM;i++)
        {
            if(i!=1)cout<<"+";
            cout<<i<<"^"<<ansK;
        }
    }
    return 0;
}