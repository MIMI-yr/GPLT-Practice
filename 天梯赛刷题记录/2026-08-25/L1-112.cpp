#include<bits/stdc++.h>
using namespace std;
using LL=long long;
LL num=-10000000000;
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    vector<vector<LL>> ans(n,vector<LL>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>ans[i][j];
        }
    }
    while(k--)
    {
        LL max=LLONG_MIN,r=0,c=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(ans[i][j]>max)
                {
                    max=ans[i][j];
                    r=i;
                    c=j;
                }
            }
        }
        for(int i=0;i<m;i++)
        {
            ans[r][i]=num;
        }
        for(int i=0;i<n;i++)
        {
            ans[i][c]=num;
        }
    }
    for(int i=0;i<n;i++)
    {
        int t=0;
        for(int j=0;j<m;j++)
        {
            if(ans[i][j]!=num)
            {
                if(t)cout<<" ";
                cout<<ans[i][j];
                t++;
            }
        }
        if(t)cout<<endl;
    }
    return 0;
}