#include<bits/stdc++.h>
using namespace std;
int main()
{
    int L,N;
    cin>>L>>N;
    N--;
    // 倒数第1个对应退0次，倒数第N个对应退N-1次
    string ans(L,'z');
    // 最开始假设所有位置都是z
    for(int i=L-1;i>=0;i--)
    {
        ans[i]='z'-N%26;
        N/=26;
    }
    cout<<ans;
    return 0;
}