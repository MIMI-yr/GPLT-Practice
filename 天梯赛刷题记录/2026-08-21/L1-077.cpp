#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ans[24]={0};
    for(int i=0;i<24;i++)
    {
        cin>>ans[i];
    }
    while(1)
    {
        int time;
        cin>>time;
        if(time>23||time<0)break;
        cout<<ans[time];
        if(ans[time]>50)
        {
            cout<<" Yes\n";
        }
        else cout<<" No\n";
    }
    return 0;
}