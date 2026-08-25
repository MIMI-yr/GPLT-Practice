#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ans[6]={0};
    for(int i=0;i<6;i++)
    {
        cin>>ans[i];
    }
    int n;
    cin>>n;
    for(int i=0;i<6;i++)
    {
        if(i)cout<<" ";
        int x=7-n;
        if(ans[i]>=x)
        {
            x--;
        }
        cout<<x;
    }
    return 0;
}