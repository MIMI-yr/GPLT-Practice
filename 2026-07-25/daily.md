# 2026-07-25 天梯赛刷题记录

## 今日完成

- L1-017
- L1-018
- L1-019
- L1-020 *

## 完成情况

- 状态：独立完成
- 用时：
- 提交次数：

## 解题思路

- L1-20:先把“有朋友的人”全部标记出来，再逐个检查查询名单，没被标记的人就是“帅到没朋友”。注意：1.只有一个人的朋友圈不算有朋友。2.同一个人查询多次，只能输出一次。

## 错误记录

- 

## 今日知识点

- int len=N.size();==int len=N.length();==(C)int len=strlen(N);
- setw()控制宽度   
*** /*
- setprecision表示保留几位有效数字(一个函数)
- fixed<<setprecision();表示小数点后保留几位.
- cout<<scientific<<setprecision(2)<<x;表示科学计数法
*** */
- 左对齐和右对齐:
* cout<<left<<setw(5)<<12;
* cout<<right<<setw(5)<<12;
- 填充字符：
* cout<<setfill('0')<<setw(5)<<12;
- 输出正号和取消： cout<<showpos<<10; cout<<noshowpos<<10;
/*输出十六进制、八进制、十进制:
* cout<<dec<<x;// 十进制
* cout<<oct<<x;// 八进制
* cout<<hex<<x;// 十六进制
* 显示进制前缀：cout<<showbase<<hex<<16;
*/

- vector 动态数组

## 明日计划

- 明天再写一遍20，写三道题