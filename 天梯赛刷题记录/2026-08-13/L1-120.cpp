#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    string S;
    cin>>N>>S;
    while(N--)
    {
        int t;
        cin>>t;
        if(t==1)
        {
            string s1;
            cin>>s1;
            int start=0,cnt=0;
            while(cnt<3)
            {
                int pos=S.find(s1,start);
                if(pos==string::npos)
                {
                    break;
                }
                if(cnt)cout<<" ";
                cout<<pos;
                cnt++;
                start=pos+1;
            }
            if(cnt==0)cout<<-1;
            cout<<endl;
        }
        else if(t==2)
        {
            int p;
            string s2;
            cin>>p>>s2;
            S.insert(p,s2);
            cout<<S<<endl;
        }
        else
        {
            int l,r;
            cin>>l>>r;
            reverse(S.begin()+l,S.begin()+r+1);
            cout<<S<<endl;
        }
    }
    return 0;
}