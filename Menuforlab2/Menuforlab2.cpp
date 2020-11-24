// Menuforlab2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <time.h>
#include "lab2lib.h"
using namespace std;

int main()
{
	srand(time(NULL));
    lab2lib menu;
	int input[4];
	int zq;
	char inputa[24];
	bool zw;
	int gw;
	int xs;
	int ys;
	int liste[20][20];
	int ar;
	int br;
	int cr;
	int xr;
	bool orderr = true;
	int someValuest[10] = { 7,8,8,6,6,6,1,21,11,7 };
	int sizet = sizeof(someValuest) / sizeof(someValuest[0]);

	int task;
	

	while (true) {
		cout << "Menu:\n1:Task1\n2:Task2\n3:Task3\n4:Task4\n5:Task5\n6:Task6\n";

		cin >> task;
		switch (task) {
		case 1:

			cout << "add four numbers\n";
			for (int x = 0; x < 4; x++) {
				cin >> input[x];
			}

			zq = menu.is_sorted(input);

			if (zq == 1) {
				cout << "True" << endl;
			}
			else if (zq == 0) {
				cout << "False" << endl;
			}
			break;
		case 2:

			cout << "Check if word is a palindrome:\n";
			cin >>inputa;
			gw = strlen(inputa) - 1;

			zw = menu.is_palindrome(inputa, gw);

			cout << zw;
			break;

		case 3:



			cout << "Rows(please dont go higher than 20): ";
			cin >> xs;
			cout << "Columns(please dont go higher than 20): ";
			cin >> ys;


			for (int x = 0; x < xs; x++) {
				for (int z = 0; z < ys; z++) {
					liste[x][z] = rand() % 10;
				}
			}

			menu.array_rows_cols(liste, xs, ys);
			break;
		case 4:


			while (true) {
				cout << "Give a (0 to quit)\n";
				cin >> ar;
				if (ar == 0) {
					break;
				}

				cout << "Give b\n";
				cin >> br;

				cout << "Give c\n";
				cin >> cr;


				cout << "Do you want them to be sorted in ascending or descending order? (1/0)\n";
				cin >> xr;
				if (xr == 1) {
					orderr = true;
				}
				else if (xr == 0) {
					orderr = false;
				}

				menu.swap_sort(ar, br, cr, orderr);
			}
			break;

		case 5:

			cout << "It shrinks the array!\n";


			for (int x = 0; x < sizet; x++) {
				cout << someValuest[x] << " ";
			}
			cout << "\n";

			menu.shrink_array(someValuest, sizet);
			break;
		case 6:

			menu.vectorBaseStart();
			break;
		case -1:
			exit(0);
		default:
			cout << "Sorry, there is no such task!";
			break;
		}
	}
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
