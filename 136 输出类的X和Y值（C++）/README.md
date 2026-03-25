# 136 输出类的X和Y值（C++）
在下面横线处填上适当字句，是函数实现指定功能。
class Location{
 private :
 int X,Y;
 public:
 void init(int initX,int initY){
 X = initX;
 Y = initY;
 }
 int GetX(){
 return X;
 }
 int GetY(){
 return Y;
 }
};
int main(){
 Location A1;
 A1.init(20,90);
 ___①_____ //定义一个指向A1的引用rA1;
 ___②_____ //用rA1在屏幕上依次输出对象A1的数据成员X和Y的值;
 return 0; 
}
