#include <math.h>

class Triangle{
public:
	Triangle();
	Triangle(double, double, double);
	void setWidth(double);
	double getWidth();
	void setHeight(double);
	double getHeight();
	double getArea();
	double getPerim();

private:
	double width;
	double height;
};
Triangle::Triangle(){
	this->width  = 0.00;
	this->height = 0.00;
}
Triangle::Triangle(double width, double height, double price){
	this->width  = width;
	this->height = height;
}

void Triangle::setWidth(double width){
	this->width = width;
}
double Triangle::getWidth(){
	return this->width;
}
void Triangle::setHeight(double height){
	this->height = height;
}
double Triangle::getHeight(){
	return this->height;
}

//Assuming right-angle triangle..
double Triangle::getArea(){
	return (this->height * this->width) / 2;
}
double Triangle::getPerim(){
	return ((sqrt((this->width * this->width) + (this->height * this->height))) + this->width + this->height);
}