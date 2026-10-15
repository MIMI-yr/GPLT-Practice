#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n,ans="";
    getline(cin,n);
    bool newWord=true;
    for(int i=0;i<n.size();i++)
    {
        if(n[i]==' ')
        {
            if(!ans.empty()&&ans.back()!=' ')
            {
                ans+=' ';
            }
            newWord=true;
        }
        else
        {
            if(newWord)
            {
                ans+=toupper(n[i]);
                newWord=false;
            }
            else
            {
                ans+=tolower(n[i]);
                newWord=false;
            }
        }
    }
    if(ans.back()==' ')
    {
        ans.pop_back();
    }
    cout<<ans;
    return 0;
}