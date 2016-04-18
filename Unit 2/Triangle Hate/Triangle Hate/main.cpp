#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){

	for (int i = 10; i >= 0; i--){
		for (int x = 1; x <= i; x++)
			cout << "*";
		cout << endl;
	}

	system("pause");
	return 0;
}

/*
 * Kaleb Haslam
 * Star triangle thing
 */