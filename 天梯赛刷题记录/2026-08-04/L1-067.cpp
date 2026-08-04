#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    double num;
    if(b==0)
    {
        num=a*2.455;
    }
    else num=a*1.26;
    if(num>c)cout<<fixed<<setprecision(2)<<num<<" T_T";
    else cout<<fixed<<setprecision(2)<<num<<" ^_^";
    return 0;
}