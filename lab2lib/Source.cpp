#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <time.h>
#include "lab2lib.h"
using namespace std;

int lab2lib::vectorBaseStart() 
{
    int sure;
    vector<string> name = {};
    while (true) {
        int choice = 0;
        cout << "Menu:\n1.initialise database\n2.insert\n3.search\n4.delete\n5.print\n6.quit\nMake your choice:";
        cin >> choice;
        if (choice == 0 || choice > 6 || choice < 0) {
            cout << "not a valid choice\n";
        }
        else if (choice == 1) {
            cout << "are you sure? yes/no (1/0)\n";
            cin >> sure;
            if (sure == 1) {
                vectorBaseStart();
            }
            else if (sure == 0) {

            }

        }

        else if (choice == 2) {
            while (true) {
                cout << "give q or Q to stop the loop, insert name:";
                string x;
                cin >> x;
                if (x == "q" || x == "Q") {
                    break;
                }
                else {
                    name.insert(name.begin(), x);
                }
            }
        }

        else if (choice == 3) {
            bool check = true;
            string search;
            cin >> search;
            int len = search.length();
            for (int b = 0; b < name.size(); b++) {
                for (int k = 0; k < len; k++) {
                    check = true;
                    if (search[k] == (name[b])[k]) {

                    }
                    else {
                        check = false;
                    }
                }
                if (check == true) {
                    cout << name[b] << "\n";
                }
                else {

                }
            }
        }

        else if (choice == 4) {
            string del;
            cin >> del;
            for (int z = 0; z < name.size(); z++) {
                if (name[z] == del) {
                    name.erase(name.begin() + z);
                }
                else {

                }
            }
            cout << "Done" << "\n";
        }

        else if (choice == 5) {
            for (int t = 0; t < name.size(); t++) {
                cout << name[t];
            }
        }

        else if (choice == 6) {
            break;
        }
    }
    return 0;
}




int lab2lib::is_sorted(int input[])
{
	bool b = true;
	for (int x = 0; x < sizeof(input) - 1; x++) {
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

bool lab2lib::is_palindrome(char* lista, int g)
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

int lab2lib::array_rows_cols(int lista[20][20], int xs, int ys)
{

    int sumC = 0;//the sum of the row
    int sumC2 = 0;//the sum of all rows

    int sumR = 0;//the sum of the column
    int sumR2 = 0;//the sum of all columns

    for (int x = 0; x < xs; x++) {// goes [0][0]-[0][1]....[1][0]etc...
        for (int z = 0; z < ys; z++) {
            cout << lista[x][z];
            cout << " ";
            sumC = sumC + lista[x][z];//adds the []>[]< values to sumC
        }//
        cout << sumC;
        sumC2 = sumC2 + sumC;
        sumC = 0;
        cout << "\n";
    }
    for (int y = 0; y < ys; y++) {
        for (int u = 0; u < xs; u++) {
            sumR = sumR + lista[u][y];//adds the >[]<[] values to sumR
        }
        cout << sumR;
        cout << " ";
        sumR2 = sumR2 + sumR;
        sumR = 0;
    }
    cout << sumR2 + sumC2;//the som of the entire 2D array

    /*
    for (int z = 0; z == lengthoflist x; z++) {
        xs = xs + list[z];
    }
    cout << xs;
    for (int c = 0; c == lengthoflist y; c++) {
        ys = ys + list [[c]];
    }
    cout << ys;
    int sum = xs + ys;
    cout << sum;*/
    return 0;
}

void lab2lib::swap_sort(int a, int b, int c, bool sort)
{
    if (sort == true) {//very long probably unessecary if statement lists 
        if (a < b && a < c) {//to check wich of the 3 numbers are higher or lower
            cout << a << ", ";//than eachoter, very bad if i have more than 3 numbers
            if (b < c) {
                cout << b << ", ";
                cout << c << "\n";
            }
            else if (c < b) {
                cout << c << ", ";
                cout << b << "\n";
            }
        }

        else if (b < a && b < c) {
            cout << b << ", ";
            if (a < c) {
                cout << a << ", ";
                cout << c << "\n";
            }
            else if (c < a) {
                cout << c << ", ";
                cout << a << "\n";
            }
        }

        else if (c < a && c < b) {
            cout << c << ", ";
            if (a < b) {
                cout << a << ", ";
                cout << b << "\n";
            }
            else if (b < a) {
                cout << b << ", ";
                cout << a << "\n";
            }
        }
    }

    if (sort == false) {
        if (a > b && a > c) {
            cout << a << ", ";
            if (b > c) {
                cout << b << ", ";
                cout << c << "\n";
            }
            else if (c > b) {
                cout << c << ", ";
                cout << b << "\n";
            }
        }

        else if (b > a && b > c) {
            cout << b << ", ";
            if (a > c) {
                cout << a << ", ";
                cout << c << "\n";
            }
            else if (c > a) {
                cout << c << ", ";
                cout << a << "\n";
            }
        }

        else if (c > a && c > b) {
            cout << c << ", ";
            if (a > b) {
                cout << a << ", ";
                cout << b << "\n";
            }
            else if (b > a) {
                cout << b << ", ";
                cout << a << "\n";
            }
        }
    }
}

void lab2lib::shrink_array(int someValues[10], int size)
{
    int shrink = 0;
    int A = 0;

    for (int x = 0; x < size; x = x + 2) {// adds two values to eachother
        if (x > 9) {//then skips to the third value to add it to the fourth
            break;
        }
        shrink = 0;
        shrink = someValues[x] + someValues[x + 1];
        someValues[A] = shrink;
        A = A + 1;
    }
    for (int z = 5; z < size; z++) {//replaces the used numbers with 0
        someValues[z] = 0;
    }
    for (int y = 0; y < size; y++) {//prints my new array
        cout << someValues[y] << " ";
    }
    system("pause");
    return;
}