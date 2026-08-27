#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    vector<int> rail;
    for(int i=0;i<N;i++)
    {
        int x;
        cin>>x;
        auto it=lower_bound(rail.begin(),rail.end(),x);
        if(it==rail.end())
        {
            rail.push_back(x);
        }
        else
        {
            *it=x;
        }
    }
    cout<<rail.size();
    return 0;
}