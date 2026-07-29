#include<bits/stdc++.h>
using namespace std;
struct student{
    int gender;
    string name;
    bool used=false;
};
int main()
{
    int N;
    cin>>N;
    vector<student> S(N);
    for(int i=0;i<N;i++)
    {
        cin>>S[i].gender>>S[i].name;
    }
    for(int i=0;i<N;i++)
    {
        if(S[i].used)continue;
        for(int j=N-1;j>=0;j--)
        {
            if(!S[j].used&&S[i].gender!=S[j].gender)
            {
                cout<<S[i].name<<" "<<S[j].name<<endl;
                S[i].used=true;
                S[j].used=true;
                break;
            }
        }
    }
    return 0;
}