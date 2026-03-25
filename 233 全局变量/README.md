# 233 全局变量
编写工程，包括两个源文件。其中一个源文件包括函数cal，计算整形数组的最大值、最小值和平均值，保存在全局变量中。函数原型如下：

extern int cal ( int *pData, int iLen );

其中，pData为指向数据的指针，iLen为数据个数。当计算成功时，函数返回1，出现异常情况时，返回0

另一个包含main()函数的源文件内容如下：

#include 

int max_val, min_val, ave_val;

int cal ( int *pData, int iLen );

int main ()
{
 int i;
 int data[20];

 for ( i=0; i<20; i++ )
 data[i] = i + 1;

 if ( cal(data, 20)==0 )
 printf("error");
 else
 printf("%d %d %d", max_val, min_val, ave_val);

 return 0;
}

要求完成包含cal()函数的源文件，并进行测试。
注意：只需提交包括cal()函数的源文件。
本题目的main文件已被默认提交。使用main文件中的全局变量需要使用extern声明。
