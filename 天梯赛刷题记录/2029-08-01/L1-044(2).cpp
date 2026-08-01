#include<bits/stdc++.h>
using namespace std;
int main()
{
    int K;
    cin>>K;
    int cnt=0;
    string S;
    while(cin>>S && S!="End")
    {
        if(cnt==K)
        {
            cout<<S<<endl;
            cnt=0;
        }
        else
        {
            if(S=="ChuiZi")cout<<"Bu\n";
            else if(S=="Bu")cout<<"JianDao\n";
            else cout<<"ChuiZi\n";
            cnt++;
        }
    }
    return 0;
}