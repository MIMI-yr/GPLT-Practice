#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len=0;
    string A,B;
    while(len<15)
    {
        string name;
        cin>>name;
        if(name==".")break;
        len++;
        if(len==2)A=name.substr();
        else if(len==14)B=name.substr();
    }
    if(len>=14)cout<<A<<" and "<<B<<" are inviting you to dinner...";
    else if(len>=2)cout<<A<<" is the only one for you...";
    else cout<<"Momo... No one is for you ...";
    return 0;
}