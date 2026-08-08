#include<bits/stdc++.h>
using namespace std;
// 判断一个字符是不是“单词的一部分”
// 字母和数字都属于单词字符
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
                if(!t.empty()&&t.back()!=' ')
                    t+=' ';
            }
            else 
            {
                // 如果当前字符是标点
                // 并且标点前面刚好有一个空格
                // 就删除这个空格
                if(ispunct((unsigned char)c)&&!t.empty()&&t.back()==' ')
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
            string s1="can you";
            if(i+s1.size()<=t.size()
            &&t.substr(i,s1.size())==s1
            &&(i+s1.size()==t.size()||!check(t[i+s1.size()])))
            {
                ans+="I can";
                // 一次跳过整个 "can you"
                i+=s1.size();
                continue;
            }
            string s2="could you";
            if(i+s2.size()<=t.size()
            &&t.substr(i,s2.size())==s2
            &&(i+s2.size()==t.size()||!check(t[i+s2.size()])))
            {
                ans+="I could";
                i+=s2.size();
                continue;
            }
            if(check(t[i]))
            {
                int j=i;
                // 找到整个单词的结束位置
                while(j<t.size()&&check(t[j]))
                {
                    j++;
                }
                string word=t.substr(i,j-i);
                if(word=="I"||word=="me")
                {
                    ans+="you";
                }
                else
                {
                    ans+=word;
                }
                i=j;
            }
            else if(t[i]=='?')
            {
                ans+='!';
                i++;
            }
            else
            {
                ans+=t[i];
                i++;
            }
        }
        cout<<"AI: "<<ans<<endl;
    }
    return 0;
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