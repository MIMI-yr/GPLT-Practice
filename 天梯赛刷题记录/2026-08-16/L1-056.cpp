#include<bits/stdc++.h>
using namespace std;
struct play{
    string name;
    int num;
};
int main()
{
    int N,sum=0;
    cin>>N;
    vector<play> p(N);
    for(int i=0;i<N;i++)
    {
        cin>>p[i].name>>p[i].num;
        sum+=p[i].num;
    }
    int index=(sum/N)/2;
    int minP=abs(p[0].num-index);
    string name_min=p[0].name;
    for(int i=1;i<N;i++)
    {
        int t=abs(p[i].num-index);
        if(t<minP)
        {
            minP=t;
            name_min=p[i].name;
        }
    }
    cout<<index<<" "<<name_min;
    return 0;
}