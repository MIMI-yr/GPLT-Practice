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