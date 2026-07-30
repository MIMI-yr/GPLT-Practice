#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int id[10005]={0};
    while(N--)
    {
        int K;
        cin>>K;
        while(K--)
        {
            int x;
            cin>>x;
            id[x]++;
        }
    }
    int max=0,max_id=0;
    for(int i=1;i<=1000;i++)
    {
        if(id[i]>max)
        {
            max=id[i];
            max_id=i;
        }
        else if(id[i]==max&&i>max_id)
        {
            max_id=i;
        }
    }
    cout<<max_id<<" "<<max;
    return 0;
}