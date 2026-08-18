#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int min_num=1000000,max_num=0,min_cnt=0,max_cnt=0;
    while(N--)
    {
        int x;
        cin>>x;
        if(x<min_num)
        {
            min_num=x;
            min_cnt=1;
        }
        else if(x==min_num)
        {
            min_cnt++;
        }
        if(x>max_num)
        {
            max_num=x;
            max_cnt=1;
        }
        else if(x==max_num)
        {
            max_cnt++;
        }
    }
    cout<<min_num<<" "<<min_cnt<<endl
    <<max_num<<" "<<max_cnt;
    return 0;
}