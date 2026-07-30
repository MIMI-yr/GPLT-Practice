#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin>>n;
    int ans[10]={0};
    for(char c:n)
    {
        ans[c-'0']++;
    }
    int arr[10]={0};
    int k=0;
    for(int i=9;i>=0;i--)
    {
        if(ans[i])
        {
            arr[k]=i;
            k++;
        }
    }
    int index[11]={0};
    for(int i=0;i<11;i++)
    {
        for(int j=0;j<k;j++)
        {
            if(arr[j]==(n[i]-'0'))
            {
                index[i]=j;
                break;
            }
        }
    }
    cout<<"int[] arr = new int[]{";
    for(int x=0;x<k;x++)
    {
        if(x>0)cout<<",";
        cout<<arr[x];
    }
    cout<<"};"<<endl;
    cout<<"int[] index = new int[]{";
    for(int i=0;i<11;i++)
    {
        if(i>0)cout<<",";
        cout<<index[i];
    }
    cout<<"};";
    return 0;
}