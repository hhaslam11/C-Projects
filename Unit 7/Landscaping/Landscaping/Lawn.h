
class Lawn{
public:
	Lawn();
	Lawn(double, double, double);
	void setWidth(double);
	double getWidth();
	void setHeight(double);
	double getHeight();
	void setPricePerSqYd(double);
	double getPrice();

private:
	double width;
	double height;
	double price;
};
Lawn::Lawn(){
	this->width  = 0.00;
	this->height = 0.00;
	this->price  = 0.00;
}
Lawn::Lawn(double width, double height, double price){
	this->width  = width;
	this->height = height;
	this->price  = price;
}

void Lawn::setWidth(double width){
	this->width = width;
}
double Lawn::getWidth(){
	return this->width;
}
void Lawn::setHeight(double height){
	this->height = height;
}
double Lawn::getHeight(){
	return this->height;
}
void Lawn::setPricePerSqYd(double price){
	this->price = price;
}
double Lawn::getPrice(){
	return this->price * (this->width * this->height);
}