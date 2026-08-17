# 2026-08-08 天梯赛刷题记录

## 今日完成

- L1-064**
- L1-070
- L1-071
- L1-086

## 完成情况

- 状态：独立完成
- 用时：
- 提交次数：

## 解题思路

64:
从左往右扫描，只处理原字符串中的内容，生成的新内容不再次参与替换。
从左往右扫描原字符串，发现 can you 就直接输出 I can，然后跳过去，不再对生成的内容进行二次处理
//用来整理空格
t.empty()
t.back()
t.pop_back()
用来检查 can you、could you
substr()
用来判断一个词是不是“独立单词”
isalnum()

## 错误记录

- 

## 今日知识点

isalnum(c)   // 判断是不是字母或数字 返回bool
ispunct(c)   // 判断是不是标点符号 返回bool

扩展：
isalpha(c)   // 是否为英文字母
isdigit(c)   // 是否为数字
isalnum(c)   // 是否为字母或数字

islower(c)   // 是否为小写字母
isupper(c)   // 是否为大写字母

isspace(c)   // 是否为空白字符
ispunct(c)   // 是否为标点符号

总结：

- t.empty()、t.back() 这种写法，属于 C++ 对象的成员函数调用。
- 这里的 . 叫做 成员访问运算符。
-常用：
1. t.empty() 判断容器是不是空的，返回值是 bool ==t.size()==0
2. t.size() 返回元素个数
3. t.front() 获取第一个元素 ==t[0]
4. t.back() 获取最后一个元素 ==t[t.size()-1]
5.*t.push_back(元素) 在最后加入一个元素
6. t.pop_back() 删除最后一个元素 只删除，不返回被删除的值,想先看看最后一个是什么,char x=s.back();s.pop_back();
7. t.clear() 清空所有内容

-string 特别常用的
1. s.substr(开始下标,截取长度) 截取字符串
2. s.find(要找的内容, 开始下标) 寻找字符串或字符 输出第一个位置的下标
3. s.erase(开始下标,截取长度) 删除一部分
4. s.insert(开始下标,插入元素) 插入内容
5. s.replace(开始下标,替换长度,替换元素) 替换一部分字符串
 
-vector 特别常用的
vector<int> a;

a.size();        // 元素个数
a.empty();       // 是否为空
a.front();       // 第一个元素
a.back();        // 最后一个元素

a.push_back(x);  // 尾部加入x
a.pop_back();    // 删除最后一个元素

a.clear();       // 清空

a.begin();
a.end(); 这个在排序时特别常见 sort(a.begin(),a.end());
//end是最后一个元素后面的那个位置

-C++ STL 里的算法函数
sort()      // 排序 默认从小到大
从大到小: sort(a.begin(),a.end(),greater<int>());
reverse()   // 反转 把原来的顺序整个翻过来
reverse(s.begin(),s.end());

ans[i].resize(M[i]);因为 vector<int> 是动态数组，resize() 可以直接改变它的元素个数 把 ans[i] 这个 vector 的长度调整为 M[i]。

string::npos 可以理解为 没找到

## 明日计划

-