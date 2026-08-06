#include<bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    getline(cin,S);
    int len=S.size();
    for(int i=0;i<len;)
    {
        if(S[i]!='6')
        {
            cout<<S[i];
            i++;
        }
        else
        {
            int j=i;
            while(j<len&&S[j]=='6')j++;
            int cnt=j-i;
            if(cnt>9)cout<<"27";
            else if(cnt>3)cout<<"9";
            else 
            {
                for(int k=0;k<cnt;k++)
                {
                    cout<<"6";
                }
            }
            // 跳过这一整串6
            i=j;
        }
    }
    return 0;
}