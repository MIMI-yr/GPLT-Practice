#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a[9][9];
        bool flag=true;
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                cin>>a[i][j];
                if(a[i][j]<1||a[i][j]>9)
                {
                    flag=false;
                }
            }
        }
        for(int i=0;i<9;i++)
        {
            int cnt[10]={0};
            for(int j=0;j<9;j++)
            {
                if(a[i][j]<1||a[i][j]>9)
                    continue;
                cnt[a[i][j]]++;
                if(cnt[a[i][j]]>1)
                {
                    flag=false;
                }
            }
        }
        for(int j=0;j<9;j++)
        {
            int cnt[10]={0};
            for(int i=0;i<9;i++)
            {
                if(a[i][j]<1||a[i][j]>9)
                    continue;
                cnt[a[i][j]]++;
                if(cnt[a[i][j]]>1)
                {
                    flag=false;
                }
            }
        }
        for(int bi=0;bi<9;bi+=3)
        {
            for(int bj=0;bj<9;bj+=3)
            {
                int cnt[10]={0};
                for(int i=bi;i<bi+3;i++)
                {
                    for(int j=bj;j<bj+3;j++)
                    {
                        if(a[i][j]<1||a[i][j]>9)
                            continue;
                        cnt[a[i][j]]++;
                        if(cnt[a[i][j]]>1)
                        {
                            flag=false;
                        }
                    }
                }
            }
        }
        if(flag)cout<<"1\n";
        else cout<<"0\n";
    }
}