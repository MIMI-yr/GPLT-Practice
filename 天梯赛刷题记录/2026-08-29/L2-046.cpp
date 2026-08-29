#include<bits/stdc++.h>
using namespace std;
struct School
{
    string id;
    int num;
    int contact; 
};
int main()
{
    int N,C;
    cin>>N>>C;
    priority_queue<int> q;
    vector<School> a(N);
    for(int i=0;i<N;i++)
    {
        cin>>a[i].id>>a[i].num;
        a[i].contact=(a[i].num+C-1)/C;
        q.push(a[i].num);
    }
    vector<set<int>> room(C+1);
    int roomCnt=0;
    while(!q.empty())
    {
        int num=q.top();
        q.pop();
        if(num>=C)
        {
            roomCnt++;
            num-=C;
            if(num>0)
            {
                q.push(num);
            }
        }
        else
        {
            int best=-1;
            int bestRest=-1;
            for(int rest=num;rest<C;rest++)
            {
                if(!room[rest].empty())
                {
                    int id=*room[rest].begin();
                    if(best==-1||id<best)
                    {
                        best=id;
                        bestRest=rest;
                    }
                }
            }
            if(best==-1)
            {
                roomCnt++;
                int cnt=C-num;
                int id=roomCnt;
                if(cnt>0)
                {
                    room[cnt].insert(id);
                }
            }
            else
            {
                room[bestRest].erase(best);
                int newRest=bestRest-num;
                if(newRest>0)
                {
                    room[newRest].insert(best);
                }
            }
        }
    }
    for(int i=0;i<N;i++)
    {
        cout<<a[i].id<<" "<<a[i].contact<<endl;
    }
    cout<<roomCnt;
    return 0;
}