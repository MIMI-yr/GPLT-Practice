#include<bits/stdc++.h>
using namespace std;
int plusadd(int n)
{
    int sum=0;
    while(n>0)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main()
{
    int N;
    cin>>N;
    while(N--)
    {
        int Na,Nb;
        cin>>Na>>Nb;
        int Sa=plusadd(Na),Sb=plusadd(Nb);
        if(Na%Sb==0&&Nb%Sa==0)cout<<(Na>Nb?"A\n":"B\n");
        else if(Nb%Sa==0)cout<<"B\n";
        else if(Na%Sb==0)cout<<"A\n";
        else cout<<(Na>Nb?"A\n":"B\n");
    }
    return 0;
}