#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,S,t;
    cin>>T>>S>>t;
    if(S)
    {
        if(T>35&&t>=33)cout<<"Bu Tie\n"<<T;
        else cout<<"Bu Re\n"<<t;
    }
    else
    {
        if(T>35&&t>=33)cout<<"Shi Nei\n"<<T;
        else cout<<"Shu Shi\n"<<t;
    }
    return 0;
}