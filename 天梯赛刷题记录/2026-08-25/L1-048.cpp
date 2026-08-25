#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Ra,Ca,Rb,Cb;
    cin>>Ra>>Ca;
    vector<vector<int>> ans_a(Ra,vector<int>(Ca));
    for(int i=0;i<Ra;i++)
    {
        for(int j=0;j<Ca;j++)
        {
            cin>>ans_a[i][j];
        }
    }
    cin>>Rb>>Cb;
    vector<vector<int>> ans_b(Rb,vector<int>(Cb));
    for(int i=0;i<Rb;i++)
    {
        for(int j=0;j<Cb;j++)
        {
            cin>>ans_b[i][j];
        }
    }
    if(Ca!=Rb)cout<<"Error: "<<Ca<<" != "<<Rb;
    else 
    {
        cout<<Ra<<" "<<Cb<<endl;
        for(int i=0;i<Ra;i++)
        {
            for(int j=0;j<Cb;j++)
            {
                int sum=0;
                if(j)cout<<" ";
                for(int k=0;k<Ca;k++)
                {
                    int t=ans_a[i][k]*ans_b[k][j];
                    sum+=t;
                }
                cout<<sum;
            }
            cout<<endl;
        }
    }
    return 0;
}