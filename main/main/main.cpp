#include <iostream> 
#include "calculator.h"
#include <algorithm>
#define PI 3.1415
double Calculator::getx() const { return x; }
double Calculator::gety() const { return y; }
double Calculator::getb() const { return b; }
double Calculator::perimeter(Calculator obj, double coeficient) const{//1,3 12
	return coeficient*(obj.getx()+obj.gety() + obj.getb());
}
double Calculator::square(Calculator obj) const{//2,3,5
	return obj.gety() * obj.getx() * obj.getb();
}
double Calculator::circumference(Calculator obj)const {//4,7,14 
	return PI * obj.getx();
}
double Calculator::volume(Calculator obj, double coeficient) const {//5,6
	return coeficient * square(obj);
}
double Calculator::surface_area(Calculator obj) const {//6
	return 2 * ((obj.getx() * obj.getb()) + (obj.getb() + obj.gety()) + (obj.getx() * obj.gety()));
}
double Calculator::square_circle(Calculator obj) const {//7 ,13 ,14 ,15
	return PI * square(obj);
}
//double Calculator::average(Calculator obj,double sum) const {// 8 
//	int count = this -> getx();///quet
//	for (; count != obj.gety(); count++)
//	{
//		sum += count;///quet 
//	}
//	return sum / obj.gety();
//}
double Calculator::average(Calculator obj) const {// 8
	return (obj.getx() + obj.gety()) / 2;
}
double Calculator::geometric_mean(Calculator obj) const {// 9
	return sqrt(obj.getx() * obj.gety());
}
void Calculator::da_xyu_snaet(Calculator obj) const  {//10
	std::cout << obj.getx() * obj.getx() + obj.gety() * obj.gety() <<"\n";
	std::cout << obj.getx() * obj.getx() - obj.gety() * obj.gety() <<"\n";
	std::cout << obj.getx() * obj.getx() * obj.gety() * obj.gety() <<"\n";
	std::cout << obj.getx() * obj.getx() / obj.gety() * obj.gety() <<"\n";
}
void Calculator::da_xyu_snaet_v2(Calculator obj) const {//11
	std::cout << std::fabs(obj.getx()) + std::fabs(obj.gety()) << "\n";
	std::cout << std::fabs(obj.getx()) - std::fabs(obj.gety()) << "\n";
	std::cout << std::fabs(obj.getx()) * std::fabs(obj.gety()) << "\n";
	std::cout << std::fabs(obj.getx()) / std::fabs(obj.gety()) << "\n";
}
double Calculator::hypotenuse(Calculator obj) const {//12,20
	return std::sqrt(std::pow(obj.getx(), 2) + std::pow(obj.gety(), 2));
}
double Calculator::distance_between_points(Calculator obj) const{//16 ,17,18,19,20
	return std::fabs(obj.getx() - obj.gety());
}
double Calculator::herons_formula(Calculator obj)const  {//21
	return std::sqrt(perimeter(obj, 1. / 2) * (perimeter(obj, 1. / 2) - obj.getx()) * (perimeter(obj, 1. / 2) - obj.gety()) * (perimeter(obj, 1. / 2) - obj.getb()));
}
/*void Calculator::swapp(Calculator& obj)const {///quels
	std::swap(x, obj.x);
	std::swap(y, obj.y);
}*/
int main()
{
	Calculator obj(2, 2, 2);
	//std::cout << obj.herons_formula(obj);




	///dfghjkl;dfsfsfsf
}