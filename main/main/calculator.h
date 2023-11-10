#pragma once
#define max_number 20 
class Calculator {
private:
	double x, y, b;
public:
	Calculator() = default;
	Calculator(double x, double y, double b) {
		if (x >= -max_number && x <= max_number) this->x = x;
		if (y >= -max_number && y <= max_number) this->y = y;
		if (b >= -max_number && b <= max_number) this->b = b;
	}
	double getx()const;
	double gety() const;
	double getb() const;
	double perimeter(Calculator obj, double coeficient) const;
	double square(Calculator obj) const;
	double circumference(Calculator obj) const;
	double volume(Calculator obj, double coeficient) const;
	double surface_area(Calculator obj) const;
	double square_circle(Calculator obj) const;
	double average(Calculator obj)const;
	double geometric_mean(Calculator obj) const;
	void da_xyu_snaet(Calculator obj) const;
	void da_xyu_snaet_v2(Calculator obj) const;
	double hypotenuse(Calculator obj) const;
	double distance_between_points(Calculator obj) const;
	double herons_formula(Calculator obj)const;
	void swapp(Calculator& obj)const;
};
