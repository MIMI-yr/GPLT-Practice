#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int N;
    cin>>N;
    int A=0,B=0;
    while(N--)
    {
        if(a<0||b<0)
        {
            break;
        }
        int a0,a1,b0,b1;
        cin>>a0>>a1>>b0>>b1;
        int num=a0+b0;
        if(a1==num&&b1==num)
        {
            continue;
        }
        else if(b1==num&&a1!=num)
        {
            B++;
            b--;
        }
        else if(a1==num&&b1!=num)
        {
            A++;
            a--;
        }
    }
    if(a<0)cout<<"A"<<endl<<B;
    else cout<<"B"<<endl<<A;
    return 0;
}