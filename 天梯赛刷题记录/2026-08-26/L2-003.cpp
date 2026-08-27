#include<bits/stdc++.h>
using namespace std;
struct mooncake
{
    double stock;
    double price;
    double unit;
};
bool cmp(mooncake a,mooncake b)
{
    return a.unit>b.unit;
}
int main()
{
    int N;
    double D;
    cin>>N>>D;
    vector<struct mooncake> ans(N);
    for(int i=0;i<N;i++)
    {
        cin>>ans[i].stock;
    }
    for(int i=0;i<N;i++)
    {
        cin>>ans[i].price;
        ans[i].unit=ans[i].price/ans[i].stock;
    }
    double sum=0.0;
    sort(ans.begin(),ans.end(),cmp);
    for(int i=0;i<N;i++)
    {
        if(D>=ans[i].stock)
        {
            sum+=ans[i].price;
            D-=ans[i].stock;
        }
        else
        {
            sum+=ans[i].unit*D;
            break;
        }
    }
    cout<<fixed<<setprecision(2)<<sum;
    return 0;
}