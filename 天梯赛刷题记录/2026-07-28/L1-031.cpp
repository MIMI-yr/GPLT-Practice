#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    while(N--)
    {
        int H,W;
        cin>>H>>W;
        if(H<=120||H>=200)return 0;
        if(W<=50||W>300)return 0;
        double perfect=(double)(H-100)*0.9*2;
        if(abs(W-perfect)<perfect*0.1)cout<<"You are wan mei!"<<endl;
        else if((W-perfect)>=perfect*0.1)cout<<"You are tai pang le!"<<endl;
        else if((perfect-W)>=perfect*0.1)cout<<"You are tai shou le!"<<endl;
    }
    return 0;
}