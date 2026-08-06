#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int n=1;
    while(1<<n<=N)
    {
        n++;
    }
    cout<<(1<<(n-1));
    return 0;
}
/*
// 只要翻倍后仍然不超过N，就继续翻倍
    while(ans*2<=N)
    {
        ans*=2;
    }
*/