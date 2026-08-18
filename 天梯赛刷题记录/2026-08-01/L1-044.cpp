#include<bits/stdc++.h>
using namespace std;
int main()
{
    int K;
    cin>>K;
    int cnt=0;
    string S;
    do
    {
        cin>>S;
        if(S=="End")break;
        if(cnt==K)
        {
            cout<<S<<endl;
            cnt=0;
        }
        else 
        {
            cnt++;
            if(S=="ChuiZi")cout<<"Bu"<<endl;
            else if(S=="JianDao")cout<<"ChuiZi"<<endl;
            else if(S=="Bu") cout<<"JianDao"<<endl;
        }
    }while(S!="End");
}
