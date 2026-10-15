#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,T;
    cin>>N>>T;
    vector<int> ans(N);
    for(int i=0;i<N;i++)
    {
        cin>>ans[i];
    }
    int cnt=0;
    long long sum=0;
    sort(ans.begin(),ans.end());
    while(cnt<N&&sum+ans[cnt]<=T)
    {
        sum+=ans[cnt];
        cnt++;
    }
    cout<<cnt;
    return 0;
}



// 第 5 题：最多能完成多少任务（20 分）
// 小明有 N 个编程任务，每个任务需要一定时间。现在小明只有 T 分钟，希望完成尽可能多的任务。每个任务只能完成一次，不能部分完成，任务之间没有依赖关系。
// 输入格式： 第一行输入 N 和 T（1≤N≤100000，1≤T≤1000000000）。第二行输入 N 个整数，每个任务所需时间满足 1≤ai≤1000000000。
// 输出格式： 输出最多能够完成的任务数量。
// 输入样例 1：
// 5 10
// 4 2 8 1 3


// 输出样例 1：
// 4


// 输入样例 2：
// 4 5
// 6 7 8 9


// 输出样例 2：
// 0


// 输入样例 3：
// 5 12
// 2 2 2 2 2


// 输出样例 3：
// 5