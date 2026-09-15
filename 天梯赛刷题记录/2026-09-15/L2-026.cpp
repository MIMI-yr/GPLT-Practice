#include<bits/stdc++.h>
using namespace std;
vector<int> father;
vector<int> level;
int getLevel(int x)
{
    if(level[x]!=0)
    {
        return level[x];
    }
    level[x]=getLevel(father[x])+1;
    return level[x];
}
int main()
{
    int N;
    cin>>N;
    father.resize(N+1);
    level.resize(N+1,0);
    int root;
    for(int i=1;i<=N;i++)
    {
        cin>>father[i];
        if(father[i]==-1)
            root=i;
    }
    level[root]=1;
    int maxLevel=0;
    for(int i=1;i<=N;i++)
    {
        maxLevel=max(maxLevel,getLevel(i));
    }
    cout<<maxLevel<<endl;
    int cnt=0;
    for(int i=1;i<=N;i++)
    if(level[i]==maxLevel)
    {
        if(cnt)cout<<" ";
        cout<<i;
        cnt++;
    }
    return 0;
}