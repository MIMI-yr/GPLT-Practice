#include<bits/stdc++.h>
using namespace std;
bool check(string s,int &num)// 值传递// 引用传递
{
    if(s.empty())return false;//判断字符串 s 是否为空，也就是里面有没有字符。
    num=0;//它的返回值是 bool 类型.true为空
    for(char c:s)
    {
        if(c<'0'||c>'9')return false;
        num=num*10+(c-'0');
        if(num>1000)return false;
    }
    return num>=1&&num<=1000;
}
int main()
{
    string line;
    getline(cin,line);
    int pos=line.find(' ');// 找到输入中的第一个空格
    string A=line.substr(0,pos);
    string B=line.substr(pos+1);
    int a,b;
    bool flag_a=check(A,a);
    bool flag_b=check(B,b);
    if(flag_a)cout<<a;
    else cout<<"?";
    cout<<" + ";
    if(flag_b)cout<<b;
    else cout<<"?";
    cout<<" = ";
    if(flag_a&&flag_b)cout<<a+b;
    else cout<<"?";
    return 0;
}