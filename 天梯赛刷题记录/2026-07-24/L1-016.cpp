#include<bits/stdc++.h>
using namespace std;
string m="10X98765432";
int w[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
int main()
{
    int n;
    cin>>n;
    bool allPassed=true;
    while(n--)
    {
        bool valid=true;
        string x;
        cin>>x;
        int sum=0;
        for(int i=0;i<17;i++)
        {
            char c=x[i];
            if(c>'9'||c<'0')
            {
                valid=false;
                break;
            }
            sum+=(x[i]-'0')*w[i];
        }
        if(valid)
        {
            int z=sum%11;
            if(x[17]!=m[z])
            {
                valid=false;
            }
        }
        if(!valid)
        {
            cout<<x<<endl;
            allPassed=false;
        }
    }
    if(allPassed)cout<<"All passed";
    return 0;
}