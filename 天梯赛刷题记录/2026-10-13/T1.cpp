#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans[100005];
    int cnt=1,maxlen=1;
    for(int i=0;i<n;i++)
    {
        cin>>ans[i];
    }
    for(int i=1;i<n;i++)
    {
        if(ans[i]>ans[i-1])
        {
            cnt++;
        }
        else
        {
            cnt=1;
        }
        maxlen=max(cnt,maxlen);
    }
    cout<<maxlen;
    return 0;
}
/*
第1题：连续数字段

难度：L1（20分）

题目描述：
给定一个长度为N的整数序列，求其中最长的连续严格递增段的长度。
连续严格递增指相邻两个数字满足后一个数字大于前一个数字。
例如序列1 3 5 2 4 6 8 1中，最长连续严格递增段为2 4 6 8，长度为4。

输入格式：
第一行输入整数N（1≤N≤100000）。
第二行输入N个整数，每个整数的绝对值不超过1000000000。

输出格式：
输出一个整数，表示最长连续严格递增段的长度。

输入样例：
8
1 3 5 2 4 6 8 1

输出样例：
4

*/