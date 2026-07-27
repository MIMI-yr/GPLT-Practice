#include<bits/stdc++.h>
using namespace std;
int main()
{
    double H;
    cin>>H;
    if(H<=100||H>300)return 0;
    else 
    {
        double kg=(H-100)*0.9*2;
        cout<<fixed<<setprecision(1)<<kg;
    }
    return 0;
}