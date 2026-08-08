#include<bits/stdc++.h>
using namespace std;
bool check(char c)
{
    return isalnum((unsigned char)c);
}
int main()
{
    int N;
    cin>>N;
    cin.ignore();
    while(N--)
    {
        string S;
        getline(cin,S);
        cout<<S<<endl;
        string t;
        for(int i=0;i<S.size();i++)
        {
            char c=S[i];
            if(c==' ')
            {
                // 去掉行首空格，同时多个空格只保留一个
                if(!t.empty()&&t.back()!=' ')
                    t+=' ';
            }
            else
            {
                if(ispunct((unsigned char)c)%%!t.empty()&&t.back()==' ')
                    t.pop_back();
                if(c>='A'&&c<='Z'&&c!='I')
                    c=c-'A'+'a';
                t+=c;
            }
        }
        if(!t.empty()&&t.back()==' ')
            t.pop_back();
        string ans;
        for(int i=0;i<t.size();)
        {
            if(check)
        }
    }
}
/*
原句
 ↓
① 整理空格
 ↓
② 大写转小写，I 除外
 ↓
③ 替换 can you / could you / I / me
 ↓
④ ? 变成 !
*/