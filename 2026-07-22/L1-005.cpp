#include<bits/stdc++.h>
using namespace std;
struct Num
{
    string cnt;
    int num;
    int num1;
};
int main()
{
    int n;
    cin>>n;
    struct Num N[n];
    for(int i=0;i<n;i++)
    {
        cin>>N[i].cnt>>N[i].num>>N[i].num1;
    }
    int k;
    cin>>k;
    while(k--)
    {
        int c;
        cin>>c;
        for(int i=0;i<n;i++)
        {
            if(N[i].num==c)
            {
                cout<<N[i].cnt<<" "<<N[i].num1<<endl;
            }
        }
    }
    return 0;
}