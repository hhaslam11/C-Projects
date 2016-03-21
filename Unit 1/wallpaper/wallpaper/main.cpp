#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
	
	double length      = 0,
		   width       = 0,
		   height      = 0,
		   rollCov     = 0,
		   perm        = 0,
		   wallArea    = 0,
		   rollsNeeded = 0;

	//Input
	cout << "Room length: ";
	cin >> length;
	cout << "Room width: ";
	cin >> width;
	cout << "Room height: ";
	cin >> height;
	cout << "Single roll coverage: ";
	cin >> rollCov;

	//Calculations
	perm = (length * 2) + (width * 2);
	wallArea = perm * height;	
	rollsNeeded = wallArea / rollCov;

	//Output
	cout << "Rolls needed: " << rollsNeeded;

	system("pause");
	return 0;
}

//Kaleb Haslam
//Wallpaper