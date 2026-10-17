#include<bits/stdc++.h>
using namespace std;
const int INF = 1e9;
int main()
{
    int n,m,start,target;
    cin>>n>>m>>start>>target;
    vector<int> rescue(n);
    for(int i=0;i<n;i++)
    {
        cin>>rescue[i];
    }
    vector<vector<int>> graph(n,vector<int>(n,INF));
    for(int i=0;i<m;i++)
    {
        int a,b,w;
        cin>>a>>b>>w;
        graph[a][b]=w;
        graph[b][a]=w;
    }
    vector<int> ways(n,0);
    vector<int> dist(n,INF);
    vector<int> maxRescue(n,0);
    vector<bool> visited(n,false);
    vector<int> pre(n,-1);
    dist[start]=0;
    ways[start]=1;
    maxRescue[start]=rescue[start];
    for(int i=0;i<n;i++)
    {
        int u=-1;
        for(int j=0;j<n;j++)
        {
            if(!visited[j]&&
                dist[j]!=INF&&
                (u==-1||dist[j]<dist[u]))
            {
                u=j;
            }
        }
        if(u==-1)
        {
            break;
        }
        visited[u]=true;
        for(int v=0;v<n;v++)
        {
            if(graph[u][v]==INF)
                continue;
            int newDist=dist[u]+graph[u][v];
            if(newDist<dist[v])
            {
                dist[v]=newDist;
                ways[v]=ways[u];
                maxRescue[v]=rescue[v]+maxRescue[u];
                pre[v]=u;
            }
            else if(newDist==dist[v])
            {
                ways[v]+=ways[u];
                if(maxRescue[u]+rescue[v]>maxRescue[v])
                {
                    maxRescue[v]=rescue[v]+maxRescue[u];
                    pre[v]=u;
                }
            }
        }
    }
        cout<<ways[target]<<" "<<maxRescue[target]<<endl;
        vector<int> path;
        int cur=target;
        while(cur!=-1)
        {
            path.push_back(cur);
            cur=pre[cur];
        }
        reverse(path.begin(),path.end());
        for(int i=0;i<path.size();i++)
        {
            if(i>0)
                cout<<" ";
            cout<<path[i];
        }
        cout<<endl;
        return 0;
}