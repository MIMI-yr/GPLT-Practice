#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    while(N--)
    {
        int gender,cm,kg;
        cin>>gender>>cm>>kg;
        if(gender==0)
        {
            if(cm>129)cout<<"ni li hai! ";
            else if(cm<129)cout<<"duo chi yu! ";
            else cout<<"wan mei! ";
            if(kg>25)cout<<"shao chi rou!";
            else if(kg<25)cout<<"duo chi rou!";
            else cout<<"wan mei!";
        }
        else
        {
            if(cm>130)cout<<"ni li hai! ";
            else if(cm<130)cout<<"duo chi yu! ";
            else cout<<"wan mei! ";
            if(kg>27)cout<<"shao chi rou!";
            else if(kg<27)cout<<"duo chi rou!";
            else cout<<"wan mei!";
        }
        cout<<endl;
    }
    return 0;
}