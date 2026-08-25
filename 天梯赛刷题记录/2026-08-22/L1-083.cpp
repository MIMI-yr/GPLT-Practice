#include<bits/stdc++.h>
using namespace std;
int main()
{
    int age_ban,age_compare,ask1,ask2;
    cin>>age_ban>>age_compare>>ask1>>ask2;
    if(ask1>=age_compare&&ask2<age_ban)
    {
        cout<<ask1<<"-Y "<<ask2<<"-Y\n";
        cout<<"qing 1 zhao gu hao 2";
    }
    else if(ask2>=age_compare&&ask1<age_ban)
    {
        cout<<ask1<<"-Y "<<ask2<<"-Y\n";
        cout<<"qing 2 zhao gu hao 1";
    }
    else if(ask1>=age_ban)
    {
        if(ask2>=age_ban)
        {
            cout<<ask1<<"-Y "<<ask2<<"-Y\n";
            cout<<"huan ying ru guan";
        }
        else
        {
            cout<<ask1<<"-Y "<<ask2<<"-N\n";
            cout<<"1: huan ying ru guan";
        }
    }
    else
    {
        if(ask2>=age_ban)
        {
            cout<<ask1<<"-N "<<ask2<<"-Y\n";
            cout<<"2: huan ying ru guan";
        }
        else
        {
            cout<<ask1<<"-N "<<ask2<<"-N\n";
            cout<<"zhang da zai lai ba";
        }
    }
    return 0;
}