#include<bits/stdc++.h>
using namespace std;
bool gcd(string s,int &num)
{
    num=0;
    if(s.empty())return false;
    for(char c:s)
    {
        if(c>'9'||c<'0')return false;
        num=num*10+(c-'0');
    }
    if(num>1000||num<1)return false;
    return true;
}
int main()
{
    string line;
    getline(cin,line);
    int pos=line.find(" ");
    string A=line.substr(0,pos);
    string B=line.substr(pos+1);
    int a,b;
    bool flag_A=gcd(A,a);
    bool flag_B=gcd(B,b);
    if(flag_A)cout<<a;
    else cout<<"?";
    cout<<" + ";
    if(flag_B)cout<<b;
    else cout<<"?";
    cout<<" = ";
    if(flag_A&&flag_B)cout<<a+b;
    else cout<<"?";
    return 0;
}