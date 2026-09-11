#include<bits/stdc++.h>
using namespace std;
vector<int> post;
vector<int> mid;
// ans[0] 存第0层
// ans[1] 存第1层
// ans[2] 存第2层……
vector<vector<int>> ans;
void dfs(int post_l,int post_r,int mid_l,int mid_r,int level)
{
    if(post_l>post_r)return ;
    int root=post[post_r];
    //找根
    int k=0;
    for(int i=mid_l;i<=mid_r;i++)
    {
        if(mid[i]==root)
        {
            k=i;
            break;
        }
    }
    // 如果这一层还没有创建，就创建一个新的 vector
    if(ans.size()<=level)
    {
        ans.push_back(vector<int>());
    }
    ans[level].push_back(root);
    int leftSize=k-mid_l;
    dfs(post_l,post_l+leftSize-1,
        mid_l,k-1,level+1);
    dfs(post_l+leftSize,post_r-1,
        k+1,mid_r,level+1);
}
int main()
{
    int N;
    cin>>N;
    post.resize(N);
    mid.resize(N);
    for(int i=0;i<N;i++)
    {
        cin>>post[i];
    }
    for(int i=0;i<N;i++)
    {
        cin>>mid[i];
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