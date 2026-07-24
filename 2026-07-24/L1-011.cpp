#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    getline(cin,a);
    getline(cin,b);
    bool del[128]={false};
    for(char x:b)
    {
        del[x]=true;
    }
    for(char x:a)
    {
        if(!del[x])
        cout<<x;
    }
    return 0;
}