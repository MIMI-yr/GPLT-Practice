#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int cnt=0;
    while(n--)
    {
        int k;
        cin>>k;
        if(k<1700)cnt++;
    }
    cout<<cnt;
    return 0;
}