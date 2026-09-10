#include<bits/stdc++.h>
using namespace std;
vector<int> a;
vector<int> post;
bool dfs(int l,int r,bool mirror)
{
    if(l>r)return true;
    int root=a[l];
    int k=l+1;
    if(!mirror)
    {
        while(k<=r && a[k]<root)
        {
            k++;
        }
        for(int i=k;i<=r;i++)
        {
            if(a[i]<root)
            {
                return false;
            }
        }
    }
    else
    {
        while(k<=r && a[k]>=root)
        {
            k++;
        }
            for(int i=k;i<=r;i++)
            {
                if(a[i]>=root)
                {
                    return false;
                }
            }
        
    }
    if(!dfs(l+1,k-1,mirror))
    {
        return false;
    }
    if(!dfs(k,r,mirror))
    {
        return false;
    }
    post.push_back(root);
    return true;
}
int main()
{
    int N;
    cin>>N;
    a.resize(N);
    for(int i=0;i<N;i++)
    {
        cin>>a[i];
    }
    post.clear();
    if(dfs(0,N-1,false))
    {
        cout<<"YES\n";
        for(int i=0;i<post.size();i++)
        {
            if(i)cout<<" ";
            cout<<post[i];
        }
        return 0;
    }
    post.clear();
    if(dfs(0,N-1,true))
    {
        cout<<"YES\n";
        for(int i=0;i<post.size();i++)
        {
            if(i)cout<<" ";
            cout<<post[i];
        }
        return 0;
    }
    cout<<"NO";
    return 0;
}