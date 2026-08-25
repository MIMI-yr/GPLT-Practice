#include<bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    cin>>S;
    int ans[26];
    for(int i=0;i<26;i++)
    {
        cin>>ans[i];
    }
    int cnt[26]={0};
    int sum=0;
    for(int i=0;i<S.size();i++)
    {
        sum+=ans[S[i]-'a'];
        cnt[S[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(i)cout<<" ";
        cout<<cnt[i];
    }
    cout<<endl<<sum;
    return 0;
}