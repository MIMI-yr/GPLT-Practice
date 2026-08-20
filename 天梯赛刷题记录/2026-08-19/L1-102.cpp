#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    vector<double> ans(N);
    vector<int> cnt(N,0);
    for(int i=0;i<N;i++)
    {
        cin>>ans[i];
    }
    double sum=0.0;
    while(1)
    {
        int pos,num;
        cin>>pos>>num;
        if(pos==0)break;
        sum+=ans[pos-1]*num;
        cnt[pos-1]+=num;
    }
    for(int i=0;i<N;i++)
    {
        cout<<cnt[i]<<endl;
    }
    cout<<fixed<<setprecision(2)<<sum;
    return 0;
}