#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int>&v)
{
    for(vector<int>::iterator it =v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

//vector容器构造
void test01()
{
    vector<int>v1;//默认构造，无参构造(常用)
    for(int i=0;i<10;i++)
    {
        v1.push_back(i);
    }
    printVector(v1);

    //通过区间方式进行构造
    vector<int>v2(v1.begin(),v1.end());
    printVector(v2);

    //n个elem方式构造
    vector<int>v3(10,100);//个数，数值
    printVector(v3);

    //拷贝构造(常用)
    vector<int>v4(v3);
    printVector(v4);
}

int main()
{
    test01();
    return 0;
}

/*
vector数据结构和数组相似，称为单端数组
vector可以动态扩展，即找一个更大的内存空间把原数组复制过去，释放原空间
*/