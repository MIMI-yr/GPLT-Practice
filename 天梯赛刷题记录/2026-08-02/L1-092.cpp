#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    while(N--)
    {
        int A,B,C;
        cin>>A>>B>>C;
        if(C==A*B)cout<<"Lv Yan"<<endl;
        else if(C==A+B)cout<<"Tu Dou\n";
        else cout<<"zhe du shi sha ya!\n";
    }
    return 0;
}