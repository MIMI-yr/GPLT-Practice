#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    int t=5000-((100-y)*(100-x)/2+x*y/2+(100-x)*y);
    cout<<t;
    return 0;
}