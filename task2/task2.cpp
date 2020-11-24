// task2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

bool is_palindrome(char* lista,int g)
{

	bool b = true;

	for (int k = 0; k < (g / 2) + 1; k++) {// divided by 2 beacuse it is not
		if (lista[k] != lista[g - k]) {//nessecary to check the entire word
			b = false;//only one more letter than half of it.
			break;
		}
		else {

		}
	}
	return b;
	/*char temp[24];

	for (int x = g; x < ; x--) {
		temp[x] = lista[g-x];
	}
	bool b = true;
	for (int x = 0; x < g; x++) {
		if (temp[x] != lista[x]) {
			b = false;
		}
	}
		return b;*/
}

int main()
{
	
	char input[24];
	cin.getline(input,24);
	int g = strlen(input) - 1;//the array will go from 0 to 23, NOT 1 to 24!
	//there for i need to have - 1 on the lenght, otherwise the loops later
	//breaks the program
	
	bool z = is_palindrome(input,g);

	cout << z;

	/*if (z == 1) {
		cout << "True\n";
	}
	else if (z == 0) {
		cout << "False\n";
	}*/
	
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
