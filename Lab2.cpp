// Lab2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>
using namespace std;

int is_sorted(int input[])
{
	bool b = true;
	for(int x = 0; x < sizeof(input)-1; x++) {
		if (input[x] < input[x + 1]) {
			
		}
		else {
			b = false;
		}
	}
	if (b == true) {
		return 1;
	}
	else {
		return 0;
	}
	////////
}

int main()
{
	int input[4];
	for(int x = 0; x < 4; x++) {//adds a number to each array
		cin >> input[x];
	}
	int z;
	z = is_sorted(input);
	
	if (z == 1) {// i did this instead of making a bool value here
		cout << "True" << endl;
	}
	else if(z == 0){
		cout << "False" << endl;
	}//

	
	system("pause");
	return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
