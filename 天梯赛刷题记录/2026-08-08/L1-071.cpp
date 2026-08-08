#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,M;
    cin>>N>>M;
    while(M--)
    {
        string s;
        cin>>s;
        long long l=1;
        long long r=1LL<<N;
        for(int i=0;i<N;i++)
        {
            long long mid=(l+r)/2;
            if(s[i]=='y')
            {
                r=mid;
            }
            else
            {
                // 保留右半部分
                l=mid+1;
            }
        }
        cout<<l<<endl;
    }
    return 0;
}