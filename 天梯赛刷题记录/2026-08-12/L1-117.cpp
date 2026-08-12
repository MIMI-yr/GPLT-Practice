#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int N[100001]={0};
    for(int i=0;i<n;i++)
    {
        int id,t;
        cin>>id>>t;
        if(t==0)
        {
            if(N[id]==0)
                N[id]=1;   
        }
        else
            N[id]=2;
    }
    bool first=true;
    for(int id=1;id<=100000;id++)
    {
        if(N[id]==1)
        {
            if(!first)
                cout<<" ";
            cout<<id;
            first=false;
        }
    }
    if(first)cout<<"NONE";
    return 0;
}