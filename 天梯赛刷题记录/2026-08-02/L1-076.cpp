#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,M;
    cin>>N>>M;
    while(N--)
    {
        double x;
        cin>>x;
        if(x<M)cout<<"On Sale! "<<fixed<<setprecision(1)<<x<<endl;
    }
    return 0;
}