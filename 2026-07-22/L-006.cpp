#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    int maxlen=0,ansstart=0;
    for(int start=2;1LL*start*start<=n;start++)
    {
        int temp=n;
        int now=start;
        int len=0;
        while(temp%now==0)
        {
            temp/=now;
            now++;
            len++;
        }
        if(len>maxlen)
        {
            maxlen=len;
            ansstart=start;
        }
    }
    if(maxlen==0)
    {
        cout<<1<<endl;
        cout<<n;
    }
    else
    {
        cout<<maxlen<<endl;
        for(int i=0;i<maxlen;i++)
        {
            if(i==0)cout<<ansstart;
            else cout<<"*"<<ansstart+i;
        }
    }
    return 0;
}