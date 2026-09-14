#include<bits/stdc++.h>
using namespace std;
vector<int> H(1);
void insertHeap(int x)
{
    H.push_back(x);
    int i=H.size()-1;
    while(i>1 && H[i]<H[i/2])
    {
        swap(H[i],H[i/2]);
        i=i/2;
    }
}//新数字先放最后，然后不断和父亲比较，
// 比父亲小就交换，直到不能再往上。

//找到数字的位置：
int findPos(int x)
{
    for(int i=1;i<H.size();i++)
    {
        if(H[i]==x)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int N,M;
    cin>>N>>M;
    for(int i=0;i<N;i++)
    {
        int x;
        cin>>x;
        insertHeap(x);
    }
    cin.ignore();
    while(M--)
    {
        string s;
        getline(cin,s);
        int x,y;
        if(s.find("is the root")!=string::npos)
        {
            sscanf(s.c_str(),"%d",&x);
            if(findPos(x)==1)
                cout<<"T\n";
            else
                cout<<"F\n";
        }
        else if(s.find("are siblings")!=string::npos)
        {
            sscanf(s.c_str(),"%d and %d",&x,&y);
            int px=findPos(x);
            int py=findPos(y);
            if(px/2==py/2)
                cout<<"T\n";
            else
                cout<<"F\n";
        }
        else if(s.find("is the parent of")!=string::npos)
        {
            sscanf(s.c_str(),"%d is the parent of %d",&x,&y);
            int px=findPos(x);
            int py=findPos(y);
            if(py/2==px)
                cout<<"T\n";
            else
                cout<<"F\n";
        }
        else if(s.find("is a child of")!=string::npos)
        {
            sscanf(s.c_str(),"%d is a child of %d",&x,&y);
            int px=findPos(x);
            int py=findPos(y);

            if(px/2==py)
                cout<<"T"<<endl;
            else
                cout<<"F"<<endl;
        }
    }
    return 0;
}