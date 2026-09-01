#include<bits/stdc++.h>
using namespace std;
int st[1005];
int top=-1;
int popStack()
{
    int x=st[top];
    top--;
    return x; 
}
void pushStack(int x)
{
    top++;
    st[top]=x;
}
bool emptyStack()
{
    return top==-1;
}
int getTop()
{
    return st[top];
}
int main()
{
    int N,M,K;
    cin>>N>>M>>K;
    while(K--)
    {
        top=-1;
        int need=1;
        bool flag=true;
        for(int i=0;i<N;i++)
        {
            int x;
            cin>>x;
            if(x==need)
            {
                need++;
                while(!emptyStack()&&
                        getTop()==need)
                {
                    popSTack();
                    need++;
                }
            }
            else
            {
                pushStack(x);
                if(top+1>M)
                {
                    flag=false;
                }
            }
        }
        while(!emptyStack()&&
                getTop()==need)
        {
            popSTack();
            need++;
        }
        if(flag && need==N+1)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}