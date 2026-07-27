#include<bits/stdc++.h>
using namespace std;
int main()
{
    string tel;
    cin>>tel;
    int ans[10]={0};
    for(char i:tel)
    {
        ans[i-'0']++;
    }
    int arr[10];
    int k=0;
    for(int i=9;i>=0;i--)
    {
        if(ans[i]>0)
        {
            arr[k]=i;
            k++;
        }
    }
    int index[11];
    for(int i=0;i<11;i++)
    {
        for(int j=0;j<k;j++)
        {
            if(arr[j]==tel[i]-'0')
            {
                index[i]=j;
                break;
            }
        }
    }
    cout<<"int[] arr = new int[]{";
    for(int i=0;i<k;i++)
    {
        if(i!=0)cout<<",";
        cout<<arr[i];
    }
    cout<<"};"<<endl;
    cout<<"int[] index = new int[]{";
    for(int i=0;i<11;i++)
    {
        cout<<index[i];
        if(i<10)cout<<",";
    }
    cout<<"};";
    return 0;
}