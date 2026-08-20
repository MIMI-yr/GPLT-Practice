#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[4]={0},min,abs;
    for(int i=0;i<4;i++)
    {
        cin>>a[i];
    }
    cin>>min>>abs;
    int maxP=a[0],cnt=0,pos=-1;
    for(int i=0;i<4;i++)
    {
        maxP=max(maxP,a[i]);
    }
    for(int i=0;i<4;i++)
    {
        if(maxP-a[i]>abs||a[i]<min)
        {
            cnt++;
            pos=i;
        }
    }
    if(cnt>=2)
        cout<<"Warning: please check all the tires!";
    else if(cnt)
        cout<<"Warning: please check #"<<pos+1<<"!\n";
    else cout<<"Normal";
    return 0;
}