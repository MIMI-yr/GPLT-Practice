#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a1,a2,n;
    cin>>a1>>a2>>n;
    vector<int> a={a1,a2};
    int i=0;
    while(a.size()<n)
    {
        int t=a[i]*a[i+1];
        if(t>=10)
        {
            a.push_back(t/10);
            a.push_back(t%10);
        }
        else
        {
            a.push_back(t);
        }
        i++;
    }
    for(int i=0;i<n;i++)
    {
        if(i)cout<<" ";
        cout<<a[i];
    }
    return 0;
}