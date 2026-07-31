#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin>>N;

    while(N--)
    {
        // start[id] 记录编号为 id 的书的借出时间
        int start[1005]={0};

        // flag[id] 表示这本书当前是否有有效的 S 记录
        bool flag[1005]={false};

        // cnt 表示当天有效借阅次数
        int cnt=0;

        // sum 表示当天所有有效借阅的总时间
        int sum=0;

        while(1)
        {
            int id,h,m;
            char op,ch;

            // ch 用来接收时间中的冒号
            cin>>id>>op>>h>>ch>>m;

            // 书号为 0，表示当天结束
            if(id==0)
            {
                break;
            }

            // 把小时和分钟统一转换成分钟
            int time=h*60+m;

            // 借书记录
            if(op=='S')
            {
                // 记录借出时间
                start[id]=time;

                // 标记这本书已经有有效的借出记录
                flag[id]=true;
            }

            // 还书记录
            else if(op=='E')
            {
                // 只有之前出现过有效的 S，当前 E 才有效
                if(flag[id])
                {
                    // 计算这一次阅读时间
                    sum+=time-start[id];

                    // 有效借阅次数加 1
                    cnt++;

                    // 这次借阅已经结束
                    flag[id]=false;
                }
            }
        }

        // 当天没有有效借阅
        if(cnt==0)
        {
            cout<<"0 0"<<endl;
        }
        else
        {
            // round 表示四舍五入到整数
            cout<<cnt<<" "<<round((double)sum/cnt)<<endl;
        }
    }

    return 0;
}