#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=11;
    string S;
    while(n--)
    {
        string s;
        getline(cin,s);
        S+=char('0'+s.size());
    }
    cout<<S<<endl;
    return 0;
}