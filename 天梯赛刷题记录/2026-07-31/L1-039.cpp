#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    cin.ignore();
    string S;
    getline(cin,S);
    int len=S.size();
    int K=len;
    while(K%N!=0)K++;
    for(int i=0;i<N;i++)
    {
        for(int j=K/N-1;j>=0;j--)
        {
            int pos=j*N+i;
            if(pos>=len)cout<<" ";
            else cout<<S[pos];
        }
        cout<<endl;
    }
    return 0;
}