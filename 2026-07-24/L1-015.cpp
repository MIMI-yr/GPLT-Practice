#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    char c;
    cin>>n>>c;
    int row=(n+1)/2;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<c;
        }
        cout<<endl;
    }
    return 0;
}