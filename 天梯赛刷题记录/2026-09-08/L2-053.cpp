#include<bits/stdc++.h>
using namespace std;
// Node用来描述“一个对象”
//
// 一个对象可能是：
// 1. 原始数字，例如 2、123
// 2. 一个已经计算过的括号表达式，例如 (2+3)
//
// s：如果它是原始数字，就保存这个数字字符串
// done：
// false -> 这是原始数字，需要在输出时打印
// true  -> 这是前面已经算出来的结果，不需要再打印
struct Node
{
    string s;
    bool done;
};
// 保存整个输入表达式
string str;
// pos表示当前处理到str的哪个位置
// 可以把它理解成一个“指针”或者“下标”
int pos=0;
// dfs()的作用：
//
// 从str[pos]开始，完整处理一个“对象”
//
// 处理结束之后：
// 1. pos会移动到这个对象后面
// 2. 返回这个对象的信息
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
    }
    // ==========================
    // 情况2：当前位置不是数字
    // ==========================
    //
    // 题目保证表达式合法，
    // 所以这里当前位置一定是 '('
    //
    // 例如：
    // str = "(2+3)"
    //        ^
    //       pos

    // 跳过左括号 '('
    pos++;
    // ==========================
    // 处理左边对象
    // ==========================
    // 比如：
    // (2+3)
    //  ^
    // 又比如：
    // ((2+3)*4)
    //  ^
    Node left=dfs();
    // 左边对象处理完以后
    // pos正好会停在操作符的位置
    //
    // 例如：
    // (2+3)
    //   ^
    //  pos
    //
    // 所以记录操作符
    char op=str[pos];
    // 跳过操作符
    pos++;
    Node right=dfs();
    // 跳过右括号
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
    // 当前这一整个括号表达式
    // 到这里已经计算完成了
    //
    // 所以对于它外面的表达式来说，
    // 它属于“前一步计算得到的结果”
    //
    // done=true
    //
    // s不需要保存具体结果，
    // 因为题目说结果不用输出
    return {"",true};
}
int main()
{
    cin>>str;
    dfs();
    return 0;
}