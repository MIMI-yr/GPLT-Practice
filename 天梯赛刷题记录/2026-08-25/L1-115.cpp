#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A,B;
    cin>>A>>B;
    int x=B-A;
    cout<<x<<endl;
    if(x>250)cout<<"jiu ting tu ran de...";
    else if(x<=0)cout<<"hai sheng ma?";
    else cout<<"nin tai cong ming le!";
    return 0;
}