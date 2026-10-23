#include<bits/stdc++.h>
using namespace std;
const int INF=1e9;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> dist(n,INF);
    vector<int> pre(n,-1);
    vector<int> ways(n,0);//记条数
    vector<int> rescue(n);//记救援队
    vector<bool> visited(n,false);
    vector<vector<int>> graph(n,vector<int>(n,INF));
    dist[0]=0;
    ways[0]=1;
    for(int i=0;i<n;i++)
    {
        cin>>rescue[i];
    }
    vector<int> maxRescue(n,0);
    maxRescue[0]=rescue[0];
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
            if(!visited[j]
                &&(u==-1||dist[j]<dist[u]))
            {
                u=j;
            }
        }
        if(u==-1||dist[u]==INF)
            break;
        visited[u]=true;
        for(int v=0;v<n;v++)
        {
            if(graph[u][v]==INF)
                continue;
            int newDist=dist[u]+graph[u][v];
            if(newDist<dist[v])
            {
                dist[v]=newDist;
                pre[v]=u;
                ways[v]=ways[u];
                maxRescue[v]=maxRescue[u]+rescue[v];
            }
            else if(newDist==dist[v])
            {
                ways[v]+=ways[u];
    // 路径数量始终要累加，但救援队总数只有更大时才更新
                if(maxRescue[u]+rescue[v]>maxRescue[v])
                {
                    maxRescue[v]=maxRescue[u]+rescue[v];
                    pre[v]=u;
                }
// 如果新路线救援队更多，就更新 maxRescue[v] 和 pre[v]
            }
        }
    }
}