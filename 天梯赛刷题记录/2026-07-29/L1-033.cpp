#include<bits/stdc++.h>
using namespace std;
bool check(int year,int n)
{
    string s=to_string(year);//把整数 2013 转换成字符串 "2013"
    while(s.size()<4)s="0"+s;
    bool vis[10]={false};
    int cnt=0;
    for(char c:s)
    {
        int num=c-'0';
        if(!vis[num])
        {
            vis[num]=true;
            cnt++;
        }
    }
    return cnt==n;
}
int main()
{
    int y,n;
    cin>>y>>n;
    int year=y;
    while(!check(year,n))year++;
    cout<<year-y<<" ";
    cout<<setfill('0')<<setw(4)<<year;
    return 0;
}