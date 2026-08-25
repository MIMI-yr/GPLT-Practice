#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,M,Q;
    cin>>N>>M>>Q;
    vector<bool> row(N+1,false);
    vector<bool> col(M+1,false);
    int t=0,c=0;
    while(Q--)
    {
        int T,C;
        cin>>T>>C;
        if(T==0)
        {
            if(!row[C])
            {
                row[C]=true;
                t++;
            }
        }
        else
        {
            if(!col[C])
            {
                col[C]=true;
                c++;
            }
        } 
    }
    cout<<(N-t)*(M-c);
    return 0;
}