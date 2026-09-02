#include<bits/stdc++.h>
using namespace std;
char st[105];
int top=-1;
char popStack()
{
    char x=st[top];
    top--;
    return x;
}
void pushStack(char x)
{
    top++;
    st[top]=x;
}
bool emptyStack()
{
    return top==-1;
}
bool fullStack(int Smax)
{
    return top+1==Smax;
}
int main()
{
    int N,M,Smax;
    cin>>N>>M>>Smax;
    vector<string> a(N);
    for(int i=0;i<N;i++)
    {
        cin>>a[i];
    }
    vector<int> pos(N,0);
    int t;
    while(cin>>t && t!=-1)
    {
        if(t==0)
        {
            if(!emptyStack())
            {
                cout<<popStack();
            }
        }
        else
        {
            int id=t-1;
            if(pos[id]>=M)
            {
                continue;
            }
            if(fullStack(Smax))
            {
                cout<<popStack();
            }
            pushStack(a[id][pos[id]]);
            pos[id]++;
        }
    }
    return 0;
}