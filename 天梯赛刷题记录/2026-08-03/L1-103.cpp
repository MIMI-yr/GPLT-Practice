#include<bits/stdc++.h>
using namespace std;
int getCnt(long long x)
{
    int cnt=0;
    while(x>=10)//控制一共进行多少次“各位相乘”
    {
        long long sum=1;
        while(x>0)//负责把当前数字的每一位取出来相乘
        {
            sum*=x%10;
            x/=10;
        }
        x=sum;
        cnt++;
    }
    return cnt;
}
int main()
{
    long long a,b;
    cin>>a>>b;
    int maxCnt=-1;
    vector<long long> ans;
    for(long long i=a;i<=b;i++)
    {
        int cnt=getCnt(i);
        if(cnt>maxCnt)
        {
            maxCnt=cnt;
            ans.clear();// 原来的答案不再是最大的，全部清除
            ans.push_back(i);
        }
        else if(cnt==maxCnt)
        {
            ans.push_back(i);
        }
    }
    cout<<maxCnt<<endl;
    for(int i=0;i<ans.size();i++)
    {
        if(i)cout<<" ";
        cout<<ans[i];
    }
    return 0;
}