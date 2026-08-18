#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,K,S;
    cin>>N>>K>>S;
    int pass[291]={0};//按分数分
    int normal[291]={0};
    for(int i=0;i<N;i++)
    {
        int pta,pat;
        cin>>pta>>pat;
        if(pta<175)
        {
            continue;
        }
        if(pat>=S)
        {
            pass[pta]++;
        }
        else
        {
            normal[pta]++;
        }
    }
    int ans=0;
    for(int score=175;score<=290;score++)
    {
        ans+=pass[score];
        ans+=min(normal[score],K);
    }
    cout<<ans;
    return 0;
}