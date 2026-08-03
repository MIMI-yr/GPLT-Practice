#include<bits/stdc++.h>
using namespace std;
using LL=long long;
// 计算a的k次方
// 如果结果超过limit，就直接返回limit+1
LL getPower(LL a,int k,LL limit)
{
    LL ans=1;
    for(int i=0;i<k;i++)
    {
        // 防止乘法后超过limit，也避免整数溢出
        if(ans>limit/a)
        {
            return limit+1;
        }
        ans*=a;
    }
    return ans;
}
int main()
{
    LL n;
    cin>>n;
    // 最终答案的幂次和最后一项
    int ansK=-1;
    int ansM=-1;
    // n小于2^31，所以幂次最多检查到30
    // 从大到小检查，保证找到的是最大幂次
    for(int k=30;k>=1;k--)
    {
        // 按照题目要求创建这个变量
        // 保存当前幂次和
        LL t=0;
        for(int i=1;;i++)
        {
            // 当前还可以增加的最大值
            LL remain=n-t;
            LL op=getPower(i,k,remain);
            // 加上当前项后会超过n
            // 后面的项只会更大，所以直接结束
            if(op>remain)break;
            t+=op;
            if(t==n)// 正好等于n，找到答案
            {
                ansK=k;
                ansM=i;
                break;
            }
        }
        // 因为k是从大到小枚举的
        // 找到第一个答案后就不用继续了
        if(ansK!=-1)break;
    }
    if(ansK==-1)cout<<"Impossible for "<<n<<".";
    else
    {
        for(int i=1;i<=ansM;i++)
        {
            if(i!=1)cout<<"+";
            cout<<i<<"^"<<ansK;
        }
    }
    return 0;
}