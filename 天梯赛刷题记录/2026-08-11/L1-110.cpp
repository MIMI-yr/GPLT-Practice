#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,M;
    cin>>N>>M;
    vector<int> a(N);
    for(int i=0;i<N;i++)
    {
        cin>>a[i];
    }
    vector<int> xp; // 用来保存处理中产生的中间序列
    while(M--)
    {
        int t;
        cin>>t;
        if(t==1)
        {
            int L1,L2;
            cin>>L1;
            vector<int> p1(L1);
            for(int i=0;i<L1;i++)
            {
                cin>>p1[i];
            }
            cin>>L2;
            vector<int> p2(L2);
            for(int i=0;i<L2;i++)
            {
                cin>>p2[i];
            }
            int pos=-1;// -1表示没有找到
            for(int i=0;i+L1<=a.size();i++)
            {
                bool flag=true;
                for(int j=0;j<L1;j++)
                {
                    if(a[i+j]!=p1[j])
                    {
                        flag=false;
                        break;
                    }
                }
                if(flag)
                {
                    pos=i;
                    break;
                }
            }
            if(pos!=-1)
            {
                a.erase(a.begin()+pos,
                    a.begin()+pos+L1);
                a.insert(a.begin()+pos,
                    p2.begin(),
                    p2.end());
            }
        }
        else if(t==2)
        {
            // 不能直接一边遍历a一边往a里面插
            // 否则新插入的数字又可能参与下一次判断
            //
            // 所以建立一个新的vector
            xp.clear();
            for(int i=0;i<a.size();i++)
            {
                xp.push_back(a[i]);
                if(i+1<a.size())
                {
                    if((a[i]+a[i+1])%2==0)
                    {
                        xp.push_back((a[i]+a[i+1])/2);
                    }
                }
            }
            a=xp;
        }
        else
        {
            int l,r;
            cin>>l>>r;
            reverse(a.begin()+l-1,
                a.begin()+r);
        }
    }
    for(int i=0;i<a.size();i++)
    {
        if(i)cout<<" ";
        cout<<a[i];
    }
    return 0;
}