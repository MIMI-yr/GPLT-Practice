#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,M;
    cin>>N>>M;
    cin.ignore();
    int cnt=0;
    for(int i=0;i<N;i++)
    {
        string S;
        getline(cin,S);
        if(S.find("qiandao")!=string::npos
        ||S.find("easy")!=string::npos)
        {
            continue;
        }
        cnt++;
        if(cnt>M)
        {
            cout<<S;
            return 0;
        }
    }
    cout<<"Wo AK le";
    return 0;
}