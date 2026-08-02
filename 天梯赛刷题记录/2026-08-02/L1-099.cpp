#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A,B;
    cin>>A>>B;
    if(B)
    {
        cout<<"-\n";
        if(A==1)cout<<"move";
        else cout<<"stop";
    }
    else
    {
        if(A==0)cout<<"biii\n"<<"stop";
        else if(A==1)cout<<"dudu\n"<<"move";
        else cout<<"-\n"<<"stop";
    }
    return 0;
}