#include<bits/stdc++.h>
using namespace std;
struct Node
{
    string s;
    bool done;
};
string str;
int pos=0;
Node dfs()
{
    if(isdigit(str[pos]))
    {
        string num;
        while(pos<str.size() && isdigit(str[pos]))
        {
            num+=str[pos];
            pos++;
        }
        return {num,false};
        //按照结构体成员从上到下的顺序对应：
        /*
        等价于：
        Node x;
        x.s=num;
        x.done=false;
        return x;
        */
    }
    pos++;
    Node left=dfs();
    char op=str[pos];
    pos++;
    Node right=dfs();
    pos++;
    if(!left.done)
    {
        cout<<left.s;
    }
    cout<<op;
    if(!right.done)
    {
        cout<<right.s;
    }
    cout<<endl;
    return {"",true};
}
int main()
{
    cin>>str;
    dfs();
    return 0;
}