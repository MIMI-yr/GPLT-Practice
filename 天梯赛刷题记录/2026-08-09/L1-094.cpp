#include<bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    int N;
    cin>>S>>N;
    while(N--)
    {
        int l,r;
        string s,c;
        cin>>l>>r>>s>>c;
        string ans=S.substr(l-1,r-l+1);
        S.erase(l-1,r-l+1);// 从原字符串中删除剪切部分
        string target=s+c;
        int pos=S.find(target);
        if(pos!=string::npos)
        {
            S.insert(pos+s.size(),ans);
        }
        else
        {
            S+=ans;
        }
    }
    cout<<S;
    return 0;
}