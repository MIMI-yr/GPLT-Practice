#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    while(N--)
    {
        int start[1005]={0};
        bool flag[1005]={false};
        int cnt=0,sum=0;
        while(1)
        {
            int id,h,m;
            char op,ch;
            cin>>id>>op>>h>>ch>>m;
            if(id==0)break;
            int time=h*60+m;
            if(op=='S')
            {
                start[id]=time;
                flag[id]=true;
            }
            else if(op=='E')
            {
                if(flag[id])
                {
                    sum+=time-start[id];
                    cnt++;
                    flag[id]=false;//用完要回去
                }
            }
        }
        if(cnt==0)cout<<"0 0"<<endl;
        else cout<<cnt<<" "<<round((double)sum/cnt)<<endl;
    }
    return 0;
}