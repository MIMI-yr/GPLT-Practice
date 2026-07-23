#include<bits/stdc++.h>
using namespace std;
using LL=long long;
LL gcd(LL a,LL b)
{
    a=abs(a);
    b=abs(b);
    while(b!=0)
    {
        LL temp=a%b;
        a=b;
        b=temp;
    }
    return a;
}
int main()
{
    int n;
    cin>>n;
    LL sumA=0;
    LL sumB=1;
    for(int i=0;i<n;i++)
    {
        LL a,b;
        char ch;
        cin>>a>>ch>>b;
        sumA=sumA*b+a*sumB;
        sumB=sumB*b;
        LL g=gcd(sumA,sumB);
        sumA/=g;
        sumB/=g;
    }
    LL integer=sumA/sumB;
    LL remainder=sumA%sumB;
    if(integer)
    {
        cout<<integer;
        if(remainder)cout<<" "<<abs(remainder)<<"/"<<sumB;
    }
    else
    {
        if(remainder)cout<<remainder<<"/"<<sumB;
        else cout<<0;
    }
    return 0;
}