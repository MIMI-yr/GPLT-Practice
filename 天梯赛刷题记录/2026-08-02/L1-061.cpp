#include<bits/stdc++.h>
using namespace std;
int main()
{
    double kg,m;
    cin>>kg>>m;
    double t=kg/m/m;
    cout<<fixed<<setprecision(1)<<t<<endl;
    if(t>25)cout<<"PANG";
    else cout<<"Hai Xing";
    return 0;
}