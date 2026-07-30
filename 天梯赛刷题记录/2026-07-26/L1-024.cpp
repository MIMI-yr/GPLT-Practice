#include<bits/stdc++.h>
using namespace std;
int main()
{
    int D;
    cin>>D;
    int x=(D+2)%7;
    if(x==0)x=7;
    cout<<x;
    return 0;
}