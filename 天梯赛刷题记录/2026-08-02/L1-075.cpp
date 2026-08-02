#include<bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    cin>>S;
    int len=S.size();
    if(len==4)
    {
        int num=(S[0]-'0')*10+(S[1]-'0');
        if(num<22)cout<<"20"<<S[0]<<S[1]<<"-"<<S[2]<<S[3];
        else cout<<"19"<<num<<"-"<<S[2]<<S[3];
    }
    else
    {
        for(int i=0;i<4;i++)
        {
            cout<<S[i];
        }
        cout<<"-"<<S[4]<<S[5];
    }
    return 0;
}