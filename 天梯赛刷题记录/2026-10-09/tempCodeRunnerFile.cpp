#include<bits/stdc++.h>
using namespace std;
int post[35],tree[35],cnt=0,n;
void dfs(int i)
{
    if(i>n)return;
    dfs(i*2);
    dfs(i*2+1);
    tree[i]=post[cnt++];
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>post[i];
    }
    dfs(1);
    for(int i=1;i<=n;i++)
    {
        cout<<tree[i]<<" ";
    }
    return 0;
}