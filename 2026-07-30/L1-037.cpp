#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A,B;
    cin>>A>>B;
    cout<<fixed<<setprecision(2);
    if(B<0)
    {
        cout<<A<<"/"<<"("<<B<<")"<<"="<<(double)A/B;
    }
    else if(B==0)cout<<A<<"/"<<B<<"="<<"Error";
    else cout<<A<<"/"<<B<<"="<<(double)A/B;
    return 0;
}