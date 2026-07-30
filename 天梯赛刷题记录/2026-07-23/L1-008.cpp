#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    long long sum=0;
    int k=0;
    for(int i=a;i<=b;i++)
    {
        if(k%5==0&&k!=0)cout<<endl;
        sum+=i;
        cout<<setw(5)<<i;
        k++;
    }
    cout<<endl;
    cout<<"Sum = "<<sum;
    return 0;
}