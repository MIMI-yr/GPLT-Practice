#include<bits/stdc++.h>
using namespace std;
vector<int> g[10005],path,ans;
int N,in[10005];
void dfs(int u)
{
    path.push_back(u);
    if(path.size()>ans.size())
    {
        ans=path;
    }
    for(int v:g[u])
    {
        dfs(v);
    }
    path.pop_back();
}
int main()
{
    cin>>N;
    for(int i=0;i<n;i++)
    {
        int k,x;
        cin>>k;
        while(k--)
        {
            cin>>x;
            g[i].push_back(x);
            in[x]++;
        }
        sort(g[i].begin(),g[i].end());
    }
    int root=0;
    for(int i=0;i<N;i++)
    {
        if(in[i]==0)
        {
            root=i;
            break;
        }
    }
    dfs(root);
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++)
    {
        if(i>0)cout<<" ";
        cout<<ans[i];
    }
    return 0;
}