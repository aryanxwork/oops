#include<iostream>
 class A {
 int x;
 public:
 A(int X):x(X){}
 int getX() const { return x; }
 };
 int main(void){
 const A a(10);
 std::cout << a.getX() << std::endl;
 return 0;
 }
