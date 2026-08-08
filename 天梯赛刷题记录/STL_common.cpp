#include<bits/stdc++.h>
using namespace std;

int main()
{
    // =========================================================
    // 一、string 常用成员函数
    // =========================================================

    string s="hello";

    cout<<"===== string 基础 =====\n";

    // 1. size()
    // 返回字符串长度
    cout<<"s = "<<s<<"\n";
    cout<<"s.size() = "<<s.size()<<"\n";


    // 2. empty()
    // 判断字符串是否为空
    // 返回bool类型：true / false
    cout<<"s.empty() = "<<s.empty()<<"\n";


    // 3. front()
    // 获取第一个字符
    cout<<"s.front() = "<<s.front()<<"\n";


    // 4. back()
    // 获取最后一个字符
    cout<<"s.back() = "<<s.back()<<"\n";


    // 5. push_back()
    // 在字符串末尾添加一个字符
    s.push_back('!');
    cout<<"push_back('!') 后："<<s<<"\n";


    // 6. pop_back()
    // 删除最后一个字符
    // 注意：它只删除，不返回删除的字符

    char x=s.back();     // 先保存最后一个字符
    s.pop_back();        // 再删除

    cout<<"被删除的字符："<<x<<"\n";
    cout<<"pop_back() 后："<<s<<"\n";


    // 7. clear()
    // 清空字符串

    string temp="abc";

    cout<<"temp清空前："<<temp<<"\n";

    temp.clear();

    cout<<"temp.clear() 后是否为空："<<temp.empty()<<"\n";


    cout<<"\n===== string 特有功能 =====\n";


    // =========================================================
    // 二、substr()
    // =========================================================

    string a="abcdefgh";

    // 从下标2开始，截取3个字符
    string sub=a.substr(2,3);

    cout<<"a = "<<a<<"\n";
    cout<<"a.substr(2,3) = "<<sub<<"\n";

    // abcdefgh
    // 01234567
    //
    // 从2开始取3个：
    // cde


    // =========================================================
    // 三、find()
    // =========================================================

    string b="hello world";

    // 找字符串
    int pos=b.find("world");

    cout<<"\nb = "<<b<<"\n";
    cout<<"world第一次出现的位置："<<pos<<"\n";


    // 找字符
    int pos2=b.find('o');

    cout<<"字符o第一次出现的位置："<<pos2<<"\n";


    // 查找不存在的内容
    if(b.find("abc")==string::npos)
    {
        cout<<"没有找到abc\n";
    }

    // string::npos
    // 可以理解为：没有找到


    // =========================================================
    // 四、erase()
    // =========================================================

    string c="abcdefgh";

    // 从下标2开始删除3个字符
    c.erase(2,3);

    cout<<"\nerase后："<<c<<"\n";

    // 原来：
    // abcdefgh
    //
    // 删除：
    // cde
    //
    // 得到：
    // abfgh


    // =========================================================
    // 五、insert()
    // =========================================================

    string d="abef";

    // 在下标2的位置插入"cd"
    d.insert(2,"cd");

    cout<<"insert后："<<d<<"\n";

    // abef
    //   ↑
    // 插入cd
    //
    // abcdef


    // =========================================================
    // 六、replace()
    // =========================================================

    string e="abcdef";

    // 从下标2开始
    // 替换2个字符
    // 替换成"XY"

    e.replace(2,2,"XY");

    cout<<"replace后："<<e<<"\n";

    // abcdef
    //   cd
    //   ↓
    // abXYef



    // =========================================================
    // 七、vector 常用成员函数
    // =========================================================

    cout<<"\n===== vector =====\n";

    vector<int> v={10,20,30};

    cout<<"原vector：";

    for(int num:v)
    {
        cout<<num<<" ";
    }

    cout<<"\n";


    // size()
    cout<<"v.size() = "<<v.size()<<"\n";


    // empty()
    cout<<"v.empty() = "<<v.empty()<<"\n";


    // front()
    cout<<"v.front() = "<<v.front()<<"\n";


    // back()
    cout<<"v.back() = "<<v.back()<<"\n";


    // push_back()
    v.push_back(40);

    cout<<"push_back(40) 后：";

    for(int num:v)
    {
        cout<<num<<" ";
    }

    cout<<"\n";


    // pop_back()
    int last=v.back();

    v.pop_back();

    cout<<"删除的元素："<<last<<"\n";

    cout<<"pop_back() 后：";

    for(int num:v)
    {
        cout<<num<<" ";
    }

    cout<<"\n";


    // clear()
    vector<int> v2={1,2,3};

    v2.clear();

    cout<<"v2.clear() 后是否为空："<<v2.empty()<<"\n";



    // =========================================================
    // 八、begin() 和 end()
    // =========================================================

    cout<<"\n===== begin 和 end =====\n";

    vector<int> nums={5,2,8,1,3};

    // begin()
    // 指向第一个元素

    // end()
    // 指向最后一个元素后面的那个位置

    cout<<"第一个元素："<<*nums.begin()<<"\n";

    // 注意：
    // end()不能直接这样写：
    //
    // cout<<*nums.end();
    //
    // 因为end()指向的是最后一个元素的后一个位置



    // =========================================================
    // 九、sort()
    // =========================================================

    cout<<"\n===== sort =====\n";

    vector<int> arr={5,2,8,1,3};

    cout<<"排序前：";

    for(int x:arr)
    {
        cout<<x<<" ";
    }

    cout<<"\n";


    // 默认从小到大
    sort(arr.begin(),arr.end());

    cout<<"从小到大：";

    for(int x:arr)
    {
        cout<<x<<" ";
    }

    cout<<"\n";


    // 从大到小
    sort(arr.begin(),arr.end(),greater<int>());

    cout<<"从大到小：";

    for(int x:arr)
    {
        cout<<x<<" ";
    }

    cout<<"\n";



    // =========================================================
    // 十、reverse()
    // =========================================================

    cout<<"\n===== reverse =====\n";

    vector<int> r={1,2,3,4,5};

    reverse(r.begin(),r.end());

    cout<<"vector反转后：";

    for(int x:r)
    {
        cout<<x<<" ";
    }

    cout<<"\n";


    // string也能reverse

    string str="hello";

    reverse(str.begin(),str.end());

    cout<<"hello反转后："<<str<<"\n";



    // =========================================================
    // 十一、string也可以sort
    // =========================================================

    cout<<"\n===== string排序 =====\n";

    string word="dcab";

    sort(word.begin(),word.end());

    cout<<"dcab排序后："<<word<<"\n";



    // =========================================================
    // 十二、综合小例子
    // =========================================================

    cout<<"\n===== 综合例子 =====\n";

    vector<int> data;

    // 加入元素
    data.push_back(5);
    data.push_back(1);
    data.push_back(9);
    data.push_back(3);

    cout<<"原数据：";

    for(int x:data)
    {
        cout<<x<<" ";
    }

    cout<<"\n";


    // 判断是否为空
    if(!data.empty())
    {
        cout<<"第一个元素："<<data.front()<<"\n";
        cout<<"最后一个元素："<<data.back()<<"\n";
    }


    // 排序
    sort(data.begin(),data.end());

    cout<<"排序后：";

    for(int x:data)
    {
        cout<<x<<" ";
    }

    cout<<"\n";


    // 反转
    reverse(data.begin(),data.end());

    cout<<"反转后：";

    for(int x:data)
    {
        cout<<x<<" ";
    }

    cout<<"\n";


    return 0;
}