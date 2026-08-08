#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cnt=0,first=0,num=0;
    string N;
    string key="chi1 huo3 guo1";
    while(getline(cin,N)&&N!=".")
    {
        cnt++;
        if(N.find(key)!=string::npos)
        {
            if(!first)first=cnt;
             num++;
        }
    }
    cout<<cnt<<endl;
    if(num==0)cout<<"-_-#";
    else cout<<first<<" "<<num;
    return 0;
}