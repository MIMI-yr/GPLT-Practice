#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int a=0,b=0;
    vector<int>group(N);
    for(int i=0;i<N;i++)
    {
        cin>>group[i];
        if(group[i]%2==0)b++;
        else a++;
    }
    cout<<a<<" "<<b;
    return 0;
}