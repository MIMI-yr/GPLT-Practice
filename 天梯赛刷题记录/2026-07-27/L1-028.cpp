#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    while(N--)
    {
        long long num=0;
        cin>>num;
        if(num==1)cout<<"No"<<endl;
        else
        {
        bool flag=true;
        for(int i=2;1LL*i*i<=num;i++)
        {
            if(num%i==0)flag=false;
        }
        if(flag)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
        }
    }
    return 0;
}