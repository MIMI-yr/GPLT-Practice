#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int maxGrade=0,minGrade=100;
    int ans[100005],count[105]={0};
    for(int i=0;i<n;i++)
    {
        cin>>ans[i];
        maxGrade=max(maxGrade,ans[i]);
        minGrade=min(minGrade,ans[i]);
        count[ans[i]]++;
    }
    int count_max=0;
    for(int i=0;i<=100;i++)
    {
        if(count[count_max]<count[i])
        {
            count_max=i;
        }
    }
    cout<<maxGrade<<" "<<minGrade<<endl;
    cout<<count_max<<" "<<count[count_max];
    return 0;
}