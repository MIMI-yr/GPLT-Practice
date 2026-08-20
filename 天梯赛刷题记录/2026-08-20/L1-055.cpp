#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Pa,Pb;
    cin>>Pa>>Pb;
    int a[3]={0};
    cin>>a[0]>>a[1]>>a[2];
    if(a[0]==0&&a[1]==0&&a[2]==0)
    {
        cout<<"The winner is "<<"a: "<<Pa<<" + 3";
    }
    else if(a[0]==1&&a[1]==1&&a[2]==1)
    {
        cout<<"The winner is "<<"b: "<<Pb<<" + 3";
    }
    else
    {
        int cnt=0;
        if(Pa>Pb)
        {
            for(int i=0;i<3;i++)
            {
                if(a[i]==0)cnt++;
            }
            cout<<"The winner is "<<"a: "<<Pa<<" + "<<cnt;
        }
        else
        {
            for(int i=0;i<3;i++)
            {
                if(a[i]==1)cnt++;
            }
            cout<<"The winner is "<<"b: "<<Pb<<" + "<<cnt;
        }
    }
    return 0;
}