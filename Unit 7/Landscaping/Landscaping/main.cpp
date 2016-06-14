#include <iostream>
#include "Lawn.h"

using std::cin;
using std::cout;
using std::endl;

int main(){
	Lawn lawn;
	lawn.setWidth(15);
	lawn.setHeight(20);
	lawn.setPricePerSqYd(5);
	cout << lawn.getPrice();
	system("pause");
	return 0;
}
/*
 * Kaleb Haslam
 * Landscaping
 */