#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    while(N--)
    {
        string S;
        cin>>S;
        int breath,pulse;
        cin>>breath>>pulse;
        if(breath>20||breath<15||pulse>70||pulse<50)
            cout<<S<<endl;
    }
    return 0;
}