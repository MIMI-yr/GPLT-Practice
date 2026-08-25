#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int max_num=0,min_num=0,sum=0;
    vector<int> ans(n);
    for(int i=0;i<n;i++)
    {
        cin>>ans[i];
        if(ans[i]>ans[max_num])max_num=i;
        if(ans[i]<ans[min_num])min_num=i;
        sum+=ans[i];
    }
    int avg=sum/n;
    cout<<ans[max_num]<<" "<<ans[min_num]<<" "<<avg<<endl;
    int t=0;
    for(int i=0;i<n;i++)
    {
        if(ans[i]>avg*2)
        {
            if(t)cout<<" ";
            cout<<i+1;
            t++;
        }
    }
    if(t==0)cout<<"Normal";
    return 0;
}