#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,M;
    cin>>N>>M;
    vector<vector<int>> go(N+1);
    for(int i=1;i<=N;i++)
    {
        int K;
        cin>>K;
        go[i].resize(K);
        for(int j=0;j<K;j++)
        {
            cin>>go[i][j];
        }
    }
    int save[101]={0};
    int cur=1;
    while(M--)
    {
        int op,j;
        cin>>op>>j;
        if(op==0)
        {
            cur=go[cur][j-1];
        }
        else if(op==1)
        {
            save[j]=cur;
            cout<<cur<<endl;
        }
        else
        {
            cur=save[j];
        }
    }
    cout<<cur;
    return 0;
}