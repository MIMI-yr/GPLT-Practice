#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    char c;
    cin>>n>>c;
    int k=1;
    while((k+1)*(k+1)*2-1<=n)k++;
    for(int i=k;i>0;i--)
    {
        for(int j=k;j>i;j--)cout<<" ";
        for(int j=0;j<2*i-1;j++)cout<<c;
        cout<<"\n";
    }
    for(int i=1;i<k;i++)
    {
        for(int j=k;j>i+1;j--)cout<<" ";
        for(int j=1;j<=2*i+1;j++)cout<<c;
        cout<<"\n";
    }
    cout<<n-k*k*2+1;
    return 0;
}