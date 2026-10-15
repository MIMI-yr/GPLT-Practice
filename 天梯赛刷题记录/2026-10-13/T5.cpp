#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,T;
    cin>>N>>T;
    vector<int> ans(N);
    for(int i=0;i<N;i++)
    {
        cin>>ans[i];
    }
    int cnt=0;
    long long sum=0;
    sort(ans.begin(),ans.end());
    while(cnt<N&&sum+ans[cnt]<=T)
    {
        sum+=ans[cnt];
        cnt++;
    }
    cout<<cnt;
    return 0;
}