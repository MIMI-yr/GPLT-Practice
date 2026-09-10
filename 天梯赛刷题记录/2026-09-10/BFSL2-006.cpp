#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int val;
    Node* left;
    Node* right;
};
vector<int> post;
vector<int> mid;
Node* build(int post_l,int post_r,
    int mid_l,int mid_r)
{
    if(post_l>post_r)
    {
        return nullptr;
    }
    int root=post[post_r];
    Node* node=new Node;
    node->val=root;
    node->left=nullptr;
    node->right=nullptr;
    int k=mid_l;
    for(int i=mid_l;i<=mid_r;i++)
    {
        if(mid[i]==root)
        {
            k=i;
            break;
        }
    }
    int leftSize=k-mid_l;
    node->left=build(post_l,
        post_l+leftSize-1,mid_l,k-1);
    node->right=build(post_l+leftSize,post_r-1,
        k+1,mid_r);
    return node;
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
    Node* root=build(0,N-1,0,N-1);
    queue<Node*> q;
    q.push(root);
    int cnt=0;
    while(!q.empty())
    {
        Node* cur=q.front();
        q.pop();
        if(cnt)cout<<" ";
        cout<<cur->val;
        cnt++;
        if(cur->left!=nullptr)
        {
            q.push(cur->left);
        }
        if(cur->right!=nullptr)
        {
            q.push(cur->right);
        }
    }
    cout<<endl;
    return 0;
}