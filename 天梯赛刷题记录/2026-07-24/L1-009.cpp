#include<bits/stdc++.h>
using namespace std;
using LL=long long;
// 求a和b的最大公约数
LL gcd(LL a,LL b)
{
    // 将a变成正数
    // 例如abs(-12)等于12
    a=abs(a);

    // 将b变成正数
    b=abs(b);

    // while(b)等价于while(b!=0)
    // 只要b不等于0，就继续计算
    while(b)
    {
        // 求a除以b的余数
        LL temp=a%b;

        // 原来的b变成新的a
        a=b;

        // 余数变成新的b
        b=temp;
    }

    // 当b等于0时，a就是最大公约数
    return a;
}
int main()
{
    int N;
    cin>>N;
    LL maxA=0,maxB=1;
    for(int i=0;i<N;i++)
    {
        LL a,b;
        char ch;
        cin>>a>>ch>>b;//应该定义一个字符变量，把 / 接走：
        maxA=maxA*b+maxB*a;
        maxB=maxB*b;
        LL g=gcd(maxA,maxB);
        maxA/=g;
        maxB/=g;
    }
    LL int0=maxA/maxB;
    LL rem0=maxA%maxB;
    if(int0)
    {
        if(rem0)cout<<int0<<" "<<abs(rem0)<<"/"<<maxB;
        else cout<<int0;
    }
    else
    {
        if(rem0)cout<<rem0<<"/"<<maxB;
        else cout<<0;
    }
    return 0;
}