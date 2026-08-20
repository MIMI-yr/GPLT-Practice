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
        int sum1=0,sum2=0;
        for(int i=0;i<3;i++)
        {
            sum1+=(S[i]-'0');
        }
        for(int i=3;i<6;i++)
        {
            sum2+=(S[i]-'0');
        }
        if(sum1==sum2)cout<<"You are lucky!\n";
        else cout<<"Wish you good luck.\n";
    }
    return 0;
}