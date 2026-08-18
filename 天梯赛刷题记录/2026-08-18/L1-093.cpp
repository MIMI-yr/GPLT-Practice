#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    vector<int> ans(N);
    for(int i=0;i<N;i++)
    {
        cin>>ans[i];
    }
    int K;
    cin>>K;
    while(K--)
    {
        vector<int> pos(N);
        bool hasGuess=false;
        bool wrong=false;
        for(int i=0;i<N;i++)
        {
            cin>>pos[i];
            if(pos[i])
            {
                hasGuess=true;
                if(pos[i]!=ans[i])wrong=true;
            }
        }
        if(hasGuess&&!wrong)cout<<"Da Jiang!!!\n";
        else cout<<"Ai Ya\n";
    }
    return 0;
}