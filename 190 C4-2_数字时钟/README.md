# 190 C4-2_数字时钟
定义一个时钟结构体类型：
struct clock
{
 int hour;
 int minute;
 int second;
};

typedef struct clock CLOCK;
然后，编程实现将时钟模拟显示在屏幕上。

例如,10点20分3秒
输入
10,20,3
输出
10:20:03

例如,输入非法时间
输入
25,100,200
输出
error
