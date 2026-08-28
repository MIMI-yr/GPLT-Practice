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
    vector<School> a(N);
    // 大根堆
    // 每次 top() 都是当前剩余人数最多的学校人数
    priority_queue<int> q;
    for(int i=0;i<N;i++)
    {
        cin>>a[i].id>>a[i].num;
        a[i].contact=(a[i].num+C-1)/C;//向上取整
        q.push(a[i].num);
    }
     /*
        room[x]：
        保存“还剩 x 个空位”的所有赛场编号

        例如：
        room[5] = {1, 4, 7}

        表示：
        1号、4号、7号赛场都还剩5个位置。

        set 会自动按照编号从小到大排列，
        所以 *room[5].begin() 就是编号最小的那个。
    */
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
            if(best!=-1)
            {
                room[bestRest].erase(best);
                int newRest=bestRest-num;
                if(newRest>0)
                {
                    room[newRest].insert(best);
                }
            }
            else
            {
                roomCnt++;
                int id=roomCnt;
                int rest=C-num;
                if(rest>0)
                {
                    room[rest].insert(id);
                }
            }
        }
    }
    for(int i=0;i<N;i++)
    {
        cout<<a[i].id<<" "<<a[i].contact<<"\n";
    }
    cout<<roomCnt;
    return 0;
}








#include<bits/stdc++.h>
using namespace std;

struct School
{
    string id;      // 学校名称
    int num;        // 原始人数
    int contact;    // 需要联系的监考人数
};

int main()
{
    int N,C;
    cin>>N>>C;

    vector<School> a(N);

    // 大根堆
    // 每次 top() 都是当前剩余人数最多的学校人数
    priority_queue<int> q;

    for(int i=0;i<N;i++)
    {
        cin>>a[i].id>>a[i].num;

        // 一个学校每个赛场最多放 C 人
        // 所以需要联系的监考数就是 num/C 向上取整
        a[i].contact=(a[i].num+C-1)/C;

        // 把这个学校当前未安排人数放进优先队列
        q.push(a[i].num);
    }


    /*
        room[x]：
        保存“还剩 x 个空位”的所有赛场编号

        例如：
        room[5] = {1, 4, 7}

        表示：
        1号、4号、7号赛场都还剩5个位置。

        set 会自动按照编号从小到大排列，
        所以 *room[5].begin() 就是编号最小的那个。
    */
    vector<set<int>> room(C+1);

    // 当前已经开了多少个赛场
    int roomCnt=0;


    // ========================================
    // 只要优先队列不空
    // 就说明还有学校的学生没有安排完
    // ========================================
    while(!q.empty())
    {
        // 取当前剩余人数最多的学校
        int num=q.top();
        q.pop();


        // ====================================
        // 情况1：num >= C
        //
        // 直接新开一个赛场，塞满C个人
        // ====================================
        if(num>=C)
        {
            // 新开赛场
            roomCnt++;

            // 当前学校还剩多少人
            num-=C;

            // 如果还有剩余学生
            // 重新回到优先队列等待下一轮
            if(num>0)
            {
                q.push(num);
            }

            // 这个赛场已经坐满
            // 剩余位置=0
            // 所以不用加入 room[]
        }


        // ====================================
        // 情况2：num < C
        //
        // 尝试塞进已有的非空赛场
        // ====================================
        else
        {
            int best=-1;      // 最合适的赛场编号
            int bestRest=-1;  // 这个赛场原来剩多少位置


            /*
                当前学校有 num 人。

                所以需要寻找：
                剩余位置 >= num 的赛场。

                room[num]
                room[num+1]
                ...
                room[C-1]

                都可能满足。

                题目要求选择：
                编号最小的赛场。
            */
            for(int rest=num;rest<C;rest++)
            {
                if(!room[rest].empty())
                {
                    // 当前这种剩余容量中
                    // 编号最小的赛场
                    int id=*room[rest].begin();

                    // 在所有满足条件的赛场中
                    // 找编号最小的
                    if(best==-1 || id<best)
                    {
                        best=id;
                        bestRest=rest;
                    }
                }
            }


            // =================================
            // 找到了已有赛场
            // =================================
            if(best!=-1)
            {
                // 这个赛场原来属于 room[bestRest]
                // 现在它的剩余容量要发生变化
                room[bestRest].erase(best);

                // 放进去 num 个学生以后
                // 新的剩余空间
                int newRest=bestRest-num;

                // 如果还有空位
                // 就放到新的 room[newRest] 里面
                if(newRest>0)
                {
                    room[newRest].insert(best);
                }
            }


            // =================================
            // 没有任何已有赛场能放下
            // 新开一个赛场
            // =================================
            else
            {
                roomCnt++;

                // 新赛场编号
                int id=roomCnt;

                // 放进去 num 人以后
                // 剩余多少位置
                int rest=C-num;

                // 这个赛场还没坐满
                // 记录下来，以后别的学校可以继续坐
                if(rest>0)
                {
                    room[rest].insert(id);
                }
            }

            /*
                因为现在 num<C，
                无论塞进旧赛场还是新开赛场，
                这 num 个学生都一次性安排完了。

                所以不用重新 q.push(num)。
            */
        }
    }


    // ========================================
    // 按输入顺序输出每所学校需要联系多少监考
    // ========================================
    for(int i=0;i<N;i++)
    {
        cout<<a[i].id<<" "<<a[i].contact<<"\n";
    }

    // 最后输出总赛场数
    cout<<roomCnt;

    return 0;
}