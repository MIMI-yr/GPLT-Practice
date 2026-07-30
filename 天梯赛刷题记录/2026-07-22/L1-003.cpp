#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin>>n;
    int cnt[10]={0};
    for(char c:n)
    {
        cnt[c-'0']++;
    }
    for(int i=0;i<10;i++)
    {
        if(cnt[i]>0)cout<<i<<":"<<cnt[i]<<endl;
    }
    return 0;
}