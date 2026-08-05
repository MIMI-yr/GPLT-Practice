#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    double sum=0;
    for(int i=0;i<N;i++)
    {
        double x;
        cin>>x;
        sum+=1.0/x;
    }
    cout<<fixed<<setprecision(2)<<N/sum;
    return 0;
}