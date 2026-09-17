#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,M;
    cin>>N>>M;
    vector<int> a(N+1);
    vector<int> depth(N+1,-1);
    int root=1;
    for(int i=1;i<=N;i++)
    {
        cin>>a[i];
        if(a[i]==-1)
        {
            root=i;
        }
    }
    depth[root]=0;
    vector<int> path;
    path.reserve(N);
    for(int i=1;i<=N;i++)
    {
        if(depth[i]!=-1)
        {
            continue;
        }
        path.clear();
        int x=i;
        while(x!=-1 && depth[x]==-1)
        {
            path.push_back(x);
            x=a[x];
        }
        int d=0;
        if(x!=-1)
        {
            d=depth[x];
        }
        for(int j=(int)path.size()-1;j>=0;j--)
        {
            d++;
            depth[path[j]]=d;
        }
    }
    vector<bool> vis(N+1,false);
    int cnt=0;
    int maxDepth=0;
    while(M--)
    {
        int x;
        cin>>x;
        maxDepth=max(maxDepth,dwpth[x]);
        while(a[x]!=-1 && !vis[x])
        {
            vis[x]=true;
            cnt++;
            x=a[x];
        }
        cout<<2*cnt-maxDepth<<endl;
    }
    return 0;
}