#include<bits/stdc++.h>
using namespace std;
int top_num=-1,top_c=-1;
int num[1005];
char c[1005];
int popNum()
{
    int x=num[top_num];
    top_num--;
    return x;
}
void pushNum(int x)
{
    top_num++;
    num[top_num]=x;
}
char popC()
{
    char x=c[top_c];
    top_c--;
    return x;
}
void pushC(char x)
{
    top_c++;
    c[top_c]=x;
}
int main()
{
    int N;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        int x;
        cin>>x;
        pushNum(x);
    }
    for(int i=0;i<N-1;i++)
    {
        char x;
        cin>>x;
        pushC(x);
    }
    for(int i=0;i<N-1;i++)//计算次数应该是 N-1 次，不是 N 次。
    {
        int n1=popNum(),n2=popNum();
        char op=popC();
        if(op=='+')
        {
            pushNum(n2+n1);
        }
        else if(op=='-')
        {
            pushNum(n2-n1);
        }
        else if(op=='*')
        {
            pushNum(n2*n1);
        }
        else
        {
            if(n1==0)
            {
                cout<<"ERROR: "<<n2<<"/0";
                return 0;
            }
            else
            {
                pushNum(n2/n1);
            }
        }
    }
    cout<<popNum();
    return 0;
}