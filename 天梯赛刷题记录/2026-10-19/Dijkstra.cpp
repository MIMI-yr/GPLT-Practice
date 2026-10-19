#include<bits/stdc++.h>
using namespace std;
const int INF=1e9;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> dist(n,INF);
    dist[0]=0;
    vector<bool> visited(n,false);
    vector<int> pre(n,-1);
    vector<vector<int>> graph(n,vector<int>(n,INF));
    for(int i=0;i<m;i++)
    {
        int a,b,w;
        cin>>a>>b>>w;
        graph[a][b]=w;
        graph[b][a]=w;
    }
    for(int i=0;i<n;i++)
    {
        int u=-1;
        for(int j=0;j<n;j++)
        {
            if(!visited[j]&&
                (u==-1||dist[j]<dist[u]))
                u=j;
        }
        if(u==-1||dist[u]==INF)
            break;
        visited[u]=true;
        for(int k=0;k<n;k++)
        {
            if(graph[u][k]==INF)
                continue;
            int newDist=dist[u]+graph[u][k];
            if(newDist<dist[k])
            {
                dist[k]=newDist;
                pre[k]=u;
            // 如果经过城市 u 找到了到城市 k 的更短路线，
            // 那么就记住 k 的前一个城市是 u
            }
        }
    }
    vector<int> path;
    int cur=3;
    while(cur!=-1)
    {
        path.push_back(cur);
        cur=pre[cur];
    }
    reverse(path.begin(),path.end());
    cout<<dist[3]<<endl;
    for(int i=0;i<path.size();i++)
    {
        if(i>0)
            cout<<" ";
        cout<<path[i];
    }
    return 0;
}
