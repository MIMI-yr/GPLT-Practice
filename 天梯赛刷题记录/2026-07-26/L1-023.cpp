#include<bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    cin>>S;
    int G=0,P=0,L=0,T=0;
    for(char c:S)
    {
        if(c=='g'||c=='G')G++;
        else if(c=='p'||c=='P')P++;
        else if(c=='l'||c=='L')L++;
        else if(c=='t'||c=='T')T++;
    }
    while(G>0||P>0||L>0||T>0)
    {
        if(G>0)
        {
            cout<<"G";
            G--;
        }
        if(P>0)
        {
            cout<<"P";
            P--;
        }
        if(L>0)
        {
            cout<<"L";
            L--;
        }
        if(T>0)
        {
            cout<<"T";
            T--;
        }
    }
    return 0;
}