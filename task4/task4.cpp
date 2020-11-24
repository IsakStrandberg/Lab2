// task4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void swap_sort(int a, int b, int c, bool sort)
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

int main()
{
    int a;
    int b;
    int c;

    while (true) {
        cout << "Give a (0 to quit)\n";
        cin >> a;
        if (a == 0) {
            break;
        }

        cout << "Give b\n";
        cin >> b;

        cout << "Give c\n";
        cin >> c;

        int x;
        bool order = true;
        cout << "Do you want them to be sorted in ascending or descending order? (1/0)\n";
        cin >> x;
        if (x == 1) {
            order = true;
        }
        else if (x == 0) {
            order = false;
        }
        
        swap_sort(a, b, c, order);
    }

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
