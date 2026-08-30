#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int num;
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
        cin>>address
            >>a[address].num  
            >>a[address].next;
    }
    bool used[10001]={false};
    vector<int> keep;
    vector<int> del;
    int p=L;
    while(p!=-1)
    {
        int x=abs(a[p].num);
        if(!used[x])
        {
            used[x]=true;
            keep.push_back(p);
        }
        else
        {
            del.push_back(p);
        }
        p=a[p].next;
    }
    for(int i=0;i<keep.size();i++)
    {
        int address=keep[i];
        cout<<setw(5)<<setfill('0')<<address<<" "
            <<a[address].num<<" ";
        if(i+1<keep.size())
        {
            cout<<setw(5)<<setfill('0')<<keep[i+1];
        }
        else
        {
            cout<<-1;
        }
        cout<<endl;
    }
    for(int i=0;i<del.size();i++)
    {
        int address=del[i];
        cout<<setw(5)<<setfill('0')<<address<<" "
            <<a[address].num<<" ";
        if(i+1<del.size())
        {
            cout<<setw(5)<<setfill('0')<<del[i+1];
        }
        else
        {
            cout<<-1;
        }
        cout<<endl;
    }
    return 0;
}