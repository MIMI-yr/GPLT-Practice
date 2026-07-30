#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int cnt[1001]={0};
    while(N--)
    {
        int K;
        cin>>K;
        for(int i=0;i<K;i++)
        {
            int x;
            cin>>x;
            cnt[x]++;
        }
    }
    int maxCnt=0;
    int maxId=0;
    for(int i=1;i<=1000;i++)
    {
        if(cnt[i]>maxCnt)
        {
            maxCnt=cnt[i];
            maxId=i;
        }
        else if(cnt[i]==maxCnt&&i>maxId)
        {
            maxId=i;
        }
    }
    cout<<maxId<<" "<<maxCnt;
    return 0;
}