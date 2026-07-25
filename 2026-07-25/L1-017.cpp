#include<bits/stdc++.h>
using namespace std;
int main()
{
    string N;
    cin>>N;
    int cnt=0;
    int len=N.size();// 字符串总长度
    double ans=1.0;
    if(N[0]=='-')
    {
        ans*=1.5;
        len--;
    }
    for(char c:N)
    {
        if(c=='2')cnt++;
    }
    if((N.back()-'0')%2==0)ans*=2.0;
    ans=1.0*cnt/len*ans*100;
    cout<<fixed<<setprecisiong(2)<<ans<<"%";
    // fixed表示使用普通小数形式
    // setprecision(2)表示保留小数点后2位
    return 0;
}