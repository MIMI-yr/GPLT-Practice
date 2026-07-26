#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int id[100005]={0};
    bool hasFriend[100005]={false};
    bool printed[100005]={false};
    while(N--)
    {
        int K;
        cin>>K;
        vector<int>group(K);
        for(int i=0;i<K;i++)
        {
            cin>>group[i];
        }
        if(K>1)
        {
            for(int x:group)hasFriend[x]=true;
        }
    }
    int M;
    cin>>M;
    bool flag=false;//控制换行和记录
    while(M--)
    {
        int x;
        cin>>x;
        if(!hasFriend[x]&&!printed[x])
        {
            if(flag)cout<<" ";
            cout<<setfill('0')<<setw(5)<<x;
            flag=true;
            printed[x]=true;
        }
    }
    if(!flag)cout<<"No one is handsome";
    return 0;
}