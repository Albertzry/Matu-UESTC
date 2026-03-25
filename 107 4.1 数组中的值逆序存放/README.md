# 107 4.1 数组中的值逆序存放
将一个数组中的值按逆序重新存放。例如，原来顺序为8，5，4，6，1，要求改为1，6，4，5，8。
提示：要将一个数组中的所有元素按逆序存放，只需将数组的第1个元素与最后一个元素交换，第二个元素与倒数第二个元素交换，
以此类推，直到数组最中间的元素为止。

要求实现函数ReverseArray
函数声明如下：
 int ReverseArray(int array[], int size);
 其中array表示一个int的数组，size表示数组的长度，数组中第一个元素的下标为0
 要求将array中数组的值按逆序存放，成功之后返回1
 遇到异常情况(size <= 0等)，返回0；
 请不要在函数中输出数据。
例如：
array ={1,2,3,4,5} size = 5}
调用函数ReverseArray(array, 5);之后
array={5,4,3,2,1}, ReverseArray返回值等于1
调用函数ReverseArray(array, -1);之后
array={1,2,3,4,5}，ReverseArray返回值等于0
