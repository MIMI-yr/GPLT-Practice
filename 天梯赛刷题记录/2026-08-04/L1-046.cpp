#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int num=1;
    int cnt=1;
    while(num<x)
    {
        num=num*10+1;
        cnt++;
    }
    while(1)
    {
        // 输出当前这一位的商
        cout<<num/x;
        num%=x;
        if(num==0)break;
        num=num*10+1;
        cnt++;
    }
    cout<<" "<<cnt;
    return 0;
}