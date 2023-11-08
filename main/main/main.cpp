#include <iostream> 
#include "calculator.h"
#define PI 3.1415
double Calculator::getx() { return x; }
double Calculator::gety() { return y; }
double Calculator::perimeter(Calculator obj) {//1,3
	return 2*(obj.getx()+obj.gety());
}
double Calculator::square(Calculator obj) {//2
	return obj.getx() * obj.getx();
}
double Calculator::circumference(Calculator obj) {//4
	return PI * obj.getx();
}
int main()
{
	Calculator obj(2, 3);
	std::cout << obj.circumference(obj);
}