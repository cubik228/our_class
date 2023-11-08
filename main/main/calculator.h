#pragma once
#define max_number 20 
class Calculator {
private:
	double x, y;
public:
	Calculator() = default;
	Calculator(double x, double y) {
		if (x >= -max_number && x <= max_number) this->x = x;
		if (y >= -max_number && y <= max_number) this->y = y;
	}
	double getx();
	double gety();
	double perimeter(Calculator obj);
	double square(Calculator obj);
	double circumference(Calculator obj);
};
