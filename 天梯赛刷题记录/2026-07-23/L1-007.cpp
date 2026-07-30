#include<bits/stdc++.h>
using namespace std;
string id[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
int main()
{
    string num;
    cin>>num;
    bool first=true;
    for(char x:num)
    {
        if(!first)cout<<" ";
        if(x=='-')cout<<"fu";
        else cout<<id[x-'0'];
        first=false;
    }
    return 0;
}