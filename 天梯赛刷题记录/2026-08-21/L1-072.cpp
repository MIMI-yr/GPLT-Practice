#include<bits/stdc++.h>
using namespace std;
int ans[19]={10000,36,720,360,80,252,108,72,54,180,72,180,119,36,306,1080,144,1800,3600};
int main()
{
    int pos[3][3];
    int total=0;
    int zero_i=0,zero_j=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>pos[i][j];
            if(pos[i][j]==0)
            {
                zero_i=i;
                zero_j=j;
            }
            else 
            {
                total+=pos[i][j];
            }
        }
    }
    pos[zero_i][zero_j]=45-total;
    for(int k=0;k<3;k++)
    {
        int i,j;
        cin>>i>>j;
        cout<<pos[i-1][j-1]<<endl;
    }
    int t,sum=0;
    cin>>t;
    if(t>0&&t<4)
    {
        for(int i=0;i<3;i++)
        {
            sum+=pos[t-1][i];
        }
    }
    else if(t>3&&t<7)
    {
        for(int i=0;i<3;i++)
        {
            sum+=pos[i][t-4];
        }
    }
    else if(t==7)
    {
        for(int i=0;i<3;i++)
        {
            sum+=pos[i][i];
        }
    }
    else
    {
        for(int i=0;i<3;i++)
        {
            sum+=pos[i][2-i];
        }
    }
    cout<<ans[sum-6];
    return 0;
}