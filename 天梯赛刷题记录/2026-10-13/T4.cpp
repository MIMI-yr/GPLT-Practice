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


// 第 4 题：单词规范化（20 分）
// 给定一行由英文字母和空格组成的文本，将其中每个单词规范化：
// 1. 每个单词首字母大写。
// 2. 其余字母小写。
// 3. 删除首尾空格。
// 4. 多个连续空格合并为一个空格。
// 输入格式： 输入一整行字符串，长度不超过 100000，只包含英文字母和空格，保证至少包含一个英文字母。
// 输出格式： 输出规范化后的字符串。
// 输入样例：
//    hELLo   woRLD  cpp


// 输出样例：
// Hello World Cpp