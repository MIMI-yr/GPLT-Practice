#include<bits/stdc++.h>
using namespace std;
struct student
{
    string boy;//int gender;
    string girl;//strine name;
    bool flag=false;bool used=false;
};
//可以把结构体改成上面的
int main()
{
    int N;
    cin>>N;
    vector S[N];
    for(int i=0;i<N;i++)
    {
        int t;
        cin>>t;
        if(t==1)
        {
            cin>>S[i].boy;
            S[i].girl='0';
        }
        else
        {
            cin>>S[i].girl;
            S[i].boy='0';
        } 
    }
    for(int i=0;i<N;i++)
    {
        if(S[i].boy=="0")
        {
            for(int j=N-1;j>=0;j--)
            {
                if(S[j].flag==false&&S[j].boy!="0")
                {
                    cout<<S[i].girl<<" "<<S[j].boy<<endl;
                    S[i],flag=true;
                    S[j].flag=true;
                    break;
                }
            }
        }
        if(S[i].girl=="0")
        {
            for(int j=N-1;j>=0;j--)
            {
                if(S[j].flag==false&&!S[j].girl.empty())
                {
                    cout<<S[i].boy<<" "<<S[j].girl<<endl;
                    S[i],flag=true;
                    S[j].flag=true;
                    break;
                }
                
            }
        }
    }
    return 0;
}