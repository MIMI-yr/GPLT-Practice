#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    int N;
    cin>>c>>N;
    cin.ignore();
    vector<string> pos(N);
    for(int i=0;i<N;i++)
    {
        getline(cin,pos[i]);
    }
    bool flag=true;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(pos[i][j]!=pos[N-1-i][N-1-j])flag=false;
        }
    }
    if(flag)cout<<"bu yong dao le\n";
    for(int i=N-1;i>=0;i--)
    {
        for(int j=N-1;j>=0;j--)
        {
            if(pos[i][j]=='@')cout<<c;
            else cout<<pos[i][j];
        }
        cout<<endl;
    }
    return 0;
}