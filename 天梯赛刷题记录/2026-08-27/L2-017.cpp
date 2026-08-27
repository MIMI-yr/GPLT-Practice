#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    vector<int> ans(N);
    for(int i=0;i<N;i++)
    {
        cin>>ans[i];
    }
    sort(ans.begin(),ans.end());
    long long sum_min=0,sum_max=0;
    int intro=N/2;
    int outgoing=N-intro;
    for(int i=0;i<intro;i++)
    {
        sum_min+=ans[i];
    }
    for(int i=intro;i<N;i++)
    {
        sum_max+=ans[i];
    }
    cout<<"Outgoing #: "<<outgoing<<endl;
    cout<<"Introverted #: "<<intro<<endl;
    cout<<"Diff = "<<sum_max-sum_min;
    return 0;
}