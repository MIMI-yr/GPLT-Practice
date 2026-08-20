#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n0,n1,n;
    cin>>n0>>n1>>n;
    bool flag=false;
    int cnt0=n0,cnt1=n1,cnt=INT_MAX;
    for(int i=1;i<n;i++)
    {
        int idex=n-i;
        if(n0/i>=2&&n1/idex>=2 &&
            n0%i==0 && n1%idex==0)
        {
            
            if(abs(n0/i-n1/idex)<cnt)
            {
                flag=true;
                cnt=abs(n0/i-n1/idex);
                cnt0=i;
                cnt1=idex;
            }
        }
    }
    if(flag)cout<<cnt0<<" "<<cnt1;
    else cout<<"No Solution";
    return 0;
}