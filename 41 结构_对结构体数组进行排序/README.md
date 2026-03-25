# 41 结构_对结构体数组进行排序
对结构体数组进行排序。

题目描述：
typedef struct Person{
　　int no;
　　int age;
　　int height;
}Person;

实现sort方法对结构体数组进行排序。
void sort(Person * array,int n);

根据no从小到大排序；如果no相同则根据age排序；如果age相同，则根据height排序。

注意：
遇到异常情况，输出"error"；否则不要随意输出，会视为错误。
注意struct Person的类型定义要和题目的完全一致。
