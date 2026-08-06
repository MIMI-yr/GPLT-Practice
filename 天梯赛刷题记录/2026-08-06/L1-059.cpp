#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    cin.ignore();
    while(N--)
    {
        string S;
        getline(cin,S);
        int len=S.size();
        bool flagA=false,flagB=false;
        int comma=-1,point=-1;
        for(int i=0;i<len;i++)
        {
            if(S[i]==',')
            {
                comma=i;
                if(i>=3&&S.substr(i-3,3)=="ong")
                {
                    flagA=true;
                }
            }
            if(S[i]=='.')
            {
                point=i;
                if(S[i-3]=='o'&&S[i-2]=='n'&&S[i-1]=='g')
                {
                    flagB=true;
                }
            }
        }if(flagA&&flagB)
    {
        int cnt=0;
        int pos=point-1;
         // 从句号前面向左寻找三个空格
        // 第三个空格后面就是下半句最后三个字
        while(pos>=0)
        {
            if(S[pos]==' ')
            {
                cnt++;
                if(cnt==3)break;
            }
            pos--;
        }
        cout<<S.substr(0,pos+1);
        cout<<"qiao ben zhong.\n";
    }
    else cout<<"Skipped\n";
    }
    return 0;
}