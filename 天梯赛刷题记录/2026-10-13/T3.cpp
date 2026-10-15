#include<bits/stdc++.h>
using namespace std;
struct Student
{
    string name;
    int t;
};
int main()
{
    int N;
    cin>>N;
    Student student[100005];
    int min_t=0;
    for(int i=0;i<N;i++)
    {
        cin>>student[i].name>>student[i].t;
        if(student[i].t<student[min_t].t)
        {
            min_t=i;
        }
    }
    cout<<student[min_t].name<<" "<<student[min_t].t;
    return 0;
}



// 第 3 题：最早完成任务的人（20 分）
// 有 N 名同学参加编程训练，每名同学都有一个姓名和完成任务所用的时间（单位：秒）。请找出用时最短的同学，输出其姓名和用时。如果有多名同学用时相同且都是最短的，则输出输入顺序最靠前的同学。
// 输入格式： 第一行输入 N（1≤N≤100000）。接下来 N 行，每行包含字符串 name 和整数 t。姓名只包含英文字母，长度为 1～20；1≤t≤1000000000。
// 输出格式： 输出姓名和完成时间，以空格分隔。
// 输入样例：
// 5
// Alice 120
// Bob 95
// Cindy 110
// David 95
// Eva 130


// 输出样例：
// Bob 95