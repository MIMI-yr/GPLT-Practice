#include<bits/stdc++.h>
using namespace std;
struct Time
{
    int start;
    int end;
};
int toSecond(string s)
{
    int h=(s[0]-'0')*10+(s[1]-'0');
    int m=(s[3]-'0')*10+(s[4]-'0');
    int sec=(s[6]-'0')*10+(s[7]-'0');

    return h*3600+m*60+sec;
}
void printTime(int x)
{
    int h=x/3600;
    x%=3600;
    int m=x/60;
    int s=x%60;
    cout<<setw(2)<<setfill('0')<<h<<":";
    cout<<setw(2)<<setfill('0')<<m<<":";
    cout<<setw(2)<<setfill('0')<<s;
}
bool cmp(Time a,Time b)
{
    return a.start<b.start;
}
int main()
{
    int n;
    cin>>n;
    vector<Time> a(n);
    for(int i=0;i<n;i++)
    {
        string s1,mid,s2;
        cin>>s1>>mid>>s2;
        a[i].start=toSecond(s1);
        a[i].end=toSecond(s2);
    }
    sort(a.begin(),a.end(),cmp);
    int cur=0;
    for(int i=0;i<n;i++)
    {
        if(a[i].start>cur)
        {
            printTime(cur);
            cout<<" - ";
            printTime(a[i].start);
            cout<<endl;
        }
        cur=a[i].end;
    }
    int endDay=23*3600+59*60+59;
    if(cur<endDay)
    {
        printTime(cur);
        cout<<" - ";
        printTime(endDay);
        cout<<endl;
    }
    return 0;
}