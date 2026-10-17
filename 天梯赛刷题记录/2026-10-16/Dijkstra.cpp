#include<bits/stdc++.h>
using namespace std;
cost int INF=1e9;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> graph(n,vector<int(n,INF));
    for(int i=0;i<m;i++)
    {
        int a,b,w;
        cin>>a>>b>>w;
        graph[a][b]=w;
        graph[b][a]=w;
    }
    vector<int> dist(n,INF);
    //目前找到的从起点到城市 i 的最短距离。
    vector<bool> visited(n,false);
    //城市 i 的最短距离是否已经确定。
    dist[0]=0;
    for(int i=0;i<n;i++)
    {
        //第一步：找未确定且距离最小的城市
        int u=-1;
        for(int j=0;j<n;j++)
        {
            if(!visited[j]&& 
            //已经确定最短距离的城市不再选。
            (u==-1||dist[j]<dist[u]))
            //如果还没选过城市，先选当前这个。
            //or 如果发现更近的城市，就换成它。
            {
                u=j;//记录这轮要处理的城市编号。
            }
        }
        if(u==-1||dist[u]==INF)
            break;
        visited[u]=true;
        //第二步：确定城市 u
        for(int v=0;v<n;v++)
        // 第三步：用 u 更新其他城市
        {
            if(graph[u][v]==INF)
                continue;
            int newDist=dist[u]+graph[u][v];
            if(newDist<dist[v])
            {
                dist[v]=newDist;
            }
        }
    }
    cout<<dist[3]<<endl;
    return 0;
}

int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> graph(n,vector<int>(n,INF));
    for(int i=0;i<m;i++)
    {
        int a,b,w;
        cin>>a>>b>>w;
        graph[a][b]=w;
        graph[b][a]=w;
    }
    vector<int> dist(n,INF);
    vector<bool> visited(n,false);
    dist[0]=0;
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
        for(int v=0;v<n;v++)
        {
            if(graph[u][v]==INF)
                continue;
            int newDist=dist[u]+graph[u][v];
            if(newDist<dist[v])
                dist[v]=newDist;
        }
    }
    cout<<dist[3]<<endl;
    return 0;
}