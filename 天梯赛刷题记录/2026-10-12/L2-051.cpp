#include<bits/stdc++.h>
using namespace std;
int n,root,k=0;
vector<int> tree[100005],ans;
void dfs(int u)
{
    ans.push_back(u);
    for(int v:tree[u])
    {
        dfs(v);
    }
    //把节点 u 的所有子节点，一个一个取出来，分别进行 DFS
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int p;
        cin>>p;
        if(p==0)
        {
            root=i;
        }
        else
        {
            tree[p].push_back(i);
        }
    }
    for(int i=1;i<=n;i++)
    {
        k=max(k,(int)tree[i].size());
    }
    bool flage=true;
    for(int i=1;i<=n;i++)
    {
        if(!tree[i].empty()&&tree[i].size()!=k)
        {
            flage=false;
        }
    }
    cout<<k<<" "<<(flage?"yes":"no")<<endl;
    dfs(root);
    for(int i=0;i<ans.size();i++)
    {
        if(i)cout<<" ";
        cout<<ans[i];
    }
    return 0;
}