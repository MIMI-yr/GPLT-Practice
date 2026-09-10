#include<bits/stdc++.h>
using namespace std;
vector<int> post;
vector<int> mid;
void dfs(int post_l,int post_r,int mid_l,int mid_r)
{
    if(post_l>post_r)return ;
    int root=post[post_r];
    int k=0;
    for(int i=mid_l;i<=mid_r;i++)
    {
        if(mid[i]==root)
        {
            k=i;
            break;
        }
    }
    cout<<root<<" ";
    int leftSize=k-mid_l;
    dfs(post_l,post_l+leftSize-1,mid_l,k-1);
    dfs(post_l+leftSize,post_r-1,k+1,mid_r);
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
    dfs(0,N-1,0,N-1);
    return 0;
}