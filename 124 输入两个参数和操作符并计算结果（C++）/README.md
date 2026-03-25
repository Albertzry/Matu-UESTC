# 124 输入两个参数和操作符并计算结果（C++）
下列程序接受从键盘输入的两个数以及+、-、*、/运算符，将两个数进行加、减、乘、除，输出运算结果。请填空：
#include "iostream"
#include 
using namespace std;
int main(){
char c;
float a,b,result(0);
int tag(1); //标志，1；合法，0：数据或操作不合法
cin>>a>>b>>c;
switch(c){
 case___①___:result = a+b; break;
 case___②___:result = a-b;break;
 case___③___:result = a*b;break;
 case___④___:
 if(fabs(b)<1e-6){
 cout<<"divide 0"<< endl;//注意0前面有空格
 tag=0;
 __⑤____
 }
 result = a/b;
 cout<<result<<endl;
 break;
 ___⑥___
 tag =0;
 cout<<"invalid operation"<<endl;
 ___⑦___
}
if(tag){
 cout<<result<<endl;
}
return 0;
}
