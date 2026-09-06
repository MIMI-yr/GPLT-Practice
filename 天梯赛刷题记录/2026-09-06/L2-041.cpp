#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,M,K;
    cin>>N>>M>>K;
    vector<int> a(N);
    // 推送器上的松针
    for(int i=0;i<N;i++)
    {
        cin>>a[i];
    }
    // 小盒子
    // 最后放进去的最先拿出来
    // 所以是栈
    stack<int> box;
    int pos=0;
    // 只要：
    // 推送器还有松针
    // 或者
    // 小盒子里面还有松针
    // 就还需要继续制作松枝
    while(pos<N || !box.empty())
    {
        vector<int> branch;
        if(!box.empty())
        {
            branch.push_back(box.top());
            box.pop();
        }
        else
        {
            branch.push_back(a[pos]);
            pos++;
        }
        while(branch.size()<K)
        {
            int last=branch.back();
            if(!box.empty()&&box.top()<=last)
            {
                branch.push_back(box.top());
                box.pop();
                continue;
            }
            if(pos>=N)
            {
                break;
            }
            int x=a[pos];
            if(x<=last)
            {
                branch.push_back(x);
                pos++;
            }
            else
            {
                if(box.size()>=M)
                {
                    // 注意：
                    // 这里不能pos++
                    //
                    // 因为题目要求这片松针压回推送器
                    // 下一根松枝还要继续处理它
                    break;
                }
                box.push(x);
                pos++;
            }
        }
        for(int i=0;i<branch.size();i++)
        {
            if(i)
                cout<<" ";
            cout<<branch[i];
        }
        cout<<endl;
    }
    return 0;
}