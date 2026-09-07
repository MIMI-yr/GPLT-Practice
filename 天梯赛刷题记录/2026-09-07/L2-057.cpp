#include<bits/stdc++.h>
using namespace std;
struct book
{
    int num;
    int id;
};
int main()
{
    int n,T;
    cin>>n>>T;
    vector<book> a(n+1);
    long long sum=0.0;
    int cnt=0;
    stack<book> cur,nxt;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].num;
        a[i].id=i;

        if(a[i].num<=T)
        {
            if(cnt) cout<<" ";
            cout<<a[i].id;
            cnt++;
        }
        else
        {
            nxt.push(a[i]);
            sum+=a[i].num;
        }
    }
    // 第一轮之后如果还有没批完的
    if(!nxt.empty())
    {
        T=sum/nxt.size();
        swap(cur,nxt);
    }

    while(1)
    {
        long long sum=0;
        int num=0;
        while(!cur.empty())
        {
            book x=cur.top();
            cur.pop();
            if(x.num<=T)
            {
                if(cnt)cout<<" ";
                cout<<x.id;
                cnt++;
            }
            else
            {
                nxt.push(x);
                sum+=x.num;
                num++;
            }
        }
       if(nxt.empty())
        {
            break;
        } 
        T=sum/num;
        swap(cur,nxt);
    }
    return 0;
}