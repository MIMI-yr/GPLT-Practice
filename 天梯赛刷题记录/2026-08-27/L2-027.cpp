#include<bits/stdc++.h>
using namespace std;
struct student
{
    string id;
    int grade;
};
bool cmp(student a,student b)
{
    if(a.grade!=b.grade)
        return a.grade>b.grade;
    return a.id<b.id;
}
int main()
{
    int N,G,K;
    cin>>N>>G>>K;
    int sum=0;
    vector<struct student> ans(N);
    for(int i=0;i<N;i++)
    {
        cin>>ans[i].id>>ans[i].grade;
        if(ans[i].grade>=G)sum+=50;
        else if(ans[i].grade>=60) sum+=20;
    }
    sort(ans.begin(),ans.end(),cmp);
    cout<<sum<<endl;
    int rank=1;
    for(int i=0;i<N;i++)
    {
        if(i>0 && ans[i].grade!=ans[i-1].grade)
        {
            rank=i+1;
        }
        if(rank>K)break;
        cout<<rank<<" "<<ans[i].id<<" "<<ans[i].grade<<endl;
        
    }
    return 0;
}