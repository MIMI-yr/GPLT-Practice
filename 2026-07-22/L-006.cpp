#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    int maxLen=0;
    int ansStart=0;
    for(int start=2;1LL*start*start<=n;start++)
    {
        long long temp=n;
        int now=start;
        int len=0;
        while(temp%now==0)
        {
            temp/=now;
            now++;
            len++;
        }
        if(len>maxLen)
        {
            maxLen=len;
            ansStart=start;
        }
    }
    if(maxLen==0)
    {
        cout<<1<<endl;
        cout<<n<<endl;
    }
    else
    {
        cout<<maxLen<<endl;
        for(int i=0;i<maxLen;i++)
        {
            if(i>0)
            {
                cout<<"*";
            }
            cout<<ansStart+i;
        }
    }
    return 0;
}