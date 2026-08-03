#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[505];
    int sum=0;
    for(int x=0;x<m;x++)
    {
        cin>>a[x];
        sum+=a[x];
    }
    int ans=sum-(m-1)*n;
    cout<<max(0,ans);// 人数不能小于0
    return 0;
}