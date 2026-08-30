#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    int next;
};
int main()
{
    int L,N;
    cin>>L>>N;
    Node a[100005];
    for(int i=0;i<N;i++)
    {
        int address;
        cin>>address;
        cin>>a[address].data
            >>a[address].next;
    }
    int p=L;
    vector<int> order;
    while(p!=-1)
    {
        order.push_back(p);
        p=a[p].next;
    }
    vector<int> ans;
    int l=0,r=order.size()-1;
    while(l<=r)
    {
        ans.push_back(order[r]);
        r--;
        // 注意！
    // 有可能刚才已经把最后一个取完了
        if(l<=r)
        {
            ans.push_back(order[l]);
            l++;
        }
        //这里 if(l<=r) 很重要，特别是链表长度为奇数的时候。
    }
    for(int i=0;i<ans.size();i++)
    {
        int address=ans[i];
        cout<<setw(5)<<setfill('0')<<address<<" "
            <<a[address].data<<" ";
        if(i+1<ans.size())
        {
            cout<<setw(5)<<setfill('0')<<ans[i+1];
        }
        else
        {
            cout<<-1;
        }
        cout<<endl;
    }
    return 0;
}