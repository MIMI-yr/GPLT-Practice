#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tower=0,floor=0;
    int N;
    cin>>N;
    vector<int> a(N);
    for(int i=0;i<N;i++)
    {
        cin>>a[i];
    }
    stack<int> A,B;
    A.push(a[0]);
    for(int i=1;i<N;i++)
    {
        if(a[i]<A.top())
        {
            A.push(a[i]);
        }
        else if(B.empty() || a[i]>B.top())
        {
            B.push(a[i]);
        }
        else
        {
            tower++;
            floor=max(floor,(int)A.size());
            //实际上，STL 容器的 size() 返回的不是 int，
            // 而是一个无符号整数类型 size_t。
            while(!A.empty())
                A.pop();
            while(!B.empty() && B.top()>a[i])
            {
                A.push(B.top());
                B.pop();
            }
            A.push(a[i]);
        }
    }
    /*
    A 柱剩下的还要算一座宝塔
    B 柱剩下的也要算一座宝塔
    */
    if(!A.empty())
    {
        tower++;
        floor=max(floor,(int)A.size());
    }
    if(!B.empty())
    {
        tower++;
        floor=max(floor,(int)B.size());
    }
    cout<<tower<<" "<<floor;
    return 0;
}