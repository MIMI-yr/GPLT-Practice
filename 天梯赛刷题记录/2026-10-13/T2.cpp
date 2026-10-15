#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int maxGrade=0,minGrade=100;
    int ans[100005],count[105]={0};
    for(int i=0;i<n;i++)
    {
        cin>>ans[i];
        maxGrade=max(maxGrade,ans[i]);
        minGrade=min(minGrade,ans[i]);
        count[ans[i]]++;
    }
    int count_max=0;
    for(int i=0;i<=100;i++)
    {
        if(count[count_max]<count[i])
        {
            count_max=i;
        }
    }
    cout<<maxGrade<<" "<<minGrade<<endl;
    cout<<count_max<<" "<<count[count_max];
    return 0;
}


// 第 2 题：成绩统计（20 分）
// 某班有 N 名学生，每名学生有一个整数成绩（0～100）。请统计全班最高分、最低分，以及出现次数最多的成绩及其出现次数。如果多个成绩出现次数并列最多，输出其中分数最小的成绩。
// 输入格式： 第一行输入 N（1≤N≤100000）。第二行输入 N 个整数，表示学生成绩。
// 输出格式： 第一行输出最高分和最低分；第二行输出出现次数最多的成绩及其出现次数。
// 输入样例：
// 8
// 90 85 90 70 85 90 100 70


// 输出样例：
// 100 70
// 90 3


// 补充输入样例：
// 6
// 80 90 80 90 70 70


// 补充输出样例：
// 90 70
// 70 2