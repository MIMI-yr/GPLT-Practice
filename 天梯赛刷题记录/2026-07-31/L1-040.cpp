#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    while(N--)
    {
        char c;
        double h;
        cin>>c>>h;
        if(c=='F')
        {
            double m=(double)h*1.09;
            cout<<fixed<<setprecision(2)<<m<<endl;
        }
        else
        {
            double f=(double)h/1.09;
            cout<<fixed<<setprecision(2)<<f<<endl;
        }
    }
    return 0;
}