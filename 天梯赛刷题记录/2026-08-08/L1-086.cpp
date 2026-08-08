#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,a1,a2;
    cin>>s1;
    cin.ignore();
    cin>>s2;
    for(int i=1;i<s1.size();i++)
    {
        if(s1[i]%2==s1[i-1]%2)
        a1+=max(s1[i],s1[i-1]);
    }
    for(int i=1;i<s2.size();i++)
    {
        if(s2[i]%2==s2[i-1]%2)
        a2+=max(s2[i],s2[i-1]);
    }
    if(a1.substr(0,a1.size())==a2)
        cout<<a1;
    else
        cout<<a1<<endl<<a2;
    return 0;
}