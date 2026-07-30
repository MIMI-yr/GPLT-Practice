#include<bits/stdc++.h>
using namespace std;
int main()
{
    double A,B;
    cin>>A>>B;
    if(B<0)
    {
        cout<<A<<"/"<<"("<<B<<")"<<"="<<fixed<<setprecision(2)<<A/B;
    }
    else if(B==0)cout<<A<<"/"<<B<<"="<<"Errorr";
    else cout<<A<<"/"<<B<<"="<<A/B;
    return 0;
}