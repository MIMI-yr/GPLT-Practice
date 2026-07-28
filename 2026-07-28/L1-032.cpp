#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    char c;
    cin>>N>>c;
    // 清除第一行末尾留下的换行符
    //cin.ihnore(numeric_limits<streamsize>::max(),'\n');
    //简单写为
    cin.ignore();
    string tel;
    getline(cin,tel);
    int len=tel.size();
    if(len>=N)
    {
        for(int i=len-N;i<len;i++)
        {
            cout<<tel[i];
        }
    }
    else
    {
        for(int i=0;i<N-len;i++)
        {
            cout<<c;
        }
        cout<<tel;
    }
    return 0;
}