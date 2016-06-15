#include <iostream>
#include <string>
#include "Triangle.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

//Prettiness
#include <iomanip>
using std::fixed;
using std::setprecision;

int main(){

	//Prettiness
	cout << fixed;
	cout << setprecision(2);

	Triangle tri;

	cout << "Enter width" << endl;
	tri.setWidth(std::stod(cin));

	cout << "Enter Height" << endl;
	tri.setHeight(std::stod(cin));

	cout << "Area: "  << tri.getArea()  << endl;
	cout << "Perim: " << tri.getPerim() << endl;
	system("pause");
	return 0;
}
/*
 * Kaleb Haslam
 * Landscaping
 */