#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    vector<string> S[N];
    for(int i=0;i<N;i++)
    {
        cin>>S[i];
    }
    int k;
    cin>>k;

    cin.ignore();

    string line;
    getline(cin,line);
    int cnt=0;
    string c="<censored>";
    for(int i=0;i<N;i++)
    {
        int pos=0;
        while(1)
        {
            pos=line.find(S[i],pos);
            if(pos==string::npos)break;
            cnt++;
            line.replace(pos,S[i].size(),c);
            pos+=c.size();
        }
    }
    if(cnt<k)cout<<line;
    else
    {
        cout<<cnt<<endl<<"He Xie Ni Quan Jia!"
    }
    return 0;
}