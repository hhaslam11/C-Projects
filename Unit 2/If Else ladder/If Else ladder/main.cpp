#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
	
	int strokes = 0;
	string msg;
	cout << "How many strokes?\n";
	cin >> strokes;
	
	//A case statement would be a lot easier.. but if you insist
	if (strokes == 1){
		msg = "Hole in one!";
	}else if (strokes == 2){
		msg = "Double-Eagle";
	}else if (strokes == 3){
		msg = "Eagle";
	}else if (strokes == 4){
		msg = "Birdie";
	}else if (strokes == 5){
		msg = "Par";
	}else if (strokes == 6){
		msg = "Bogey";
	}else if (strokes == 7){
		msg = "Double-Bogey";
	}else if (strokes == 8){
		msg = "Triple-Bogey";
	}else{
		msg = "Disaster (Horita was -definitely- playing)";
	}
	cout << msg << endl; //Just easier with variable IMO
	system("pause");
	return 0;
}

//Kaleb Haslam
//If/Else ladder