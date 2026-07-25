#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h,m;
    char ch;
    cin>>h>>ch>>m;
    if(h>=0&&h<=12)
    {
        cout<<"Only "<<setfill('0')<<setw(2)<<h<<":"<<setfill('0')<<setw(2)<<m<<".  Too early to Dang.";
    }
    else
    {
        if(m!=0)
        for(int i=0;i<=h-12;i++)cout<<"Dang";
        else for(int i=0;i<h-12;i++)cout<<"Dang";
    }
    return 0;
}