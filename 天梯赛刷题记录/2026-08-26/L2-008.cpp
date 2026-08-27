#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int n=s.size();
    int ans=1;
    for(int i=0;i<n;i++)
    {
        // -------------------------
        // 情况1：奇数长度回文
        // 中心是 s[i]
        // -------------------------
        int l=i,r=i;
        while(l>=0 && r<n && s[l]==s[r])
        {
            ans=max(ans,r-l+1);
            l--;
            r++;
        }
        l=i;
        r=i+1;
        // -------------------------
        // 情况2：偶数长度回文
        // 中心在 i 和 i+1 之间
        // -------------------------
        l=i;
        r=i+1;
        while(l>=0 && r<n && s[l]==s[r])
        {
            ans=max(ans,r-l+1);
            l--;
            r++;
        }
    }
    cout<<ans;
    return 0;
}