# 2026-08-13 天梯赛刷题记录

## 今日完成

- L1-120

## 完成情况

- 状态：独立完成
- 用时：
- 提交次数：

## 解题思路

在这里记录核心思路。

## 错误记录

- find() 找到之后必须 start=pos+1。因为题目明确允许重叠
1.操作 1 里 find() 重复查找了
2.找到一次后没有正确更新下一次查找位置
3.-1 的输出条件写错

## 今日知识点

- 模板:
1.查找所有出现位置，而且允许重叠：
int start=0;

while(1)
{
    int pos=S.find(target,start);

    if(pos==string::npos)
        break;

    // 找到了

    start=pos+1;
}
2.插入单个字符：
S.insert(S.begin()+p,c);
3.翻转闭区间 [l,r]：
reverse(S.begin()+l,S.begin()+r+1);

## 明日计划

-