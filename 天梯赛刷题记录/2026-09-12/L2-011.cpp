#include<bits/stdc++.h>
using namespace std;
vector<int> pre;
vector<int> mid;
vector<vector<int>> ans;
void dfs(int pre_l,int pre_r,int mid_l,int mid_r,int level)
{
    if(pre_l>pre_r)return ;
    int k=0;
    int root=pre[pre_l];
    for(int i=mid_l;i<=mid_r;i++)
    {
        if(mid[i]==root)
        {
            k=i;
            break;
        }
    }
    if(ans.size()<=level)
    {
        ans.push_back(vector<int>());
    }
    ans[level].push_back(root);
    int leftSize=k-mid_l;
    dfs(pre_l+leftSize+1,pre_r,
        k+1,mid_r,level+1);
    dfs(pre_l+1,pre_l+leftSize,
        mid_l,k-1,level+1);
}
int main()
{
    int N;
    cin>>N;
    pre.resize(N);
    mid.resize(N);
    for(int i=0;i<N;i++)
    {
        cin>>mid[i];
    }
    for(int i=0;i<N;i++)
    {
        cin>>pre[i];
    }
    dfs(0,N-1,0,N-1,0);
    int cnt=0;
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            if(cnt)cout<<" ";
            cout<<ans[i][j];
            cnt++;
        }
    }
    return 0;
}