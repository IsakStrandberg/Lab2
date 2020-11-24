// task5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>
using namespace std;

void shrink_array(int someValues[10], int size)
{
    int shrink = 0;
    int A = 0;

    for(int x = 0; x < size; x = x + 2) {// adds two values to eachother
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

int main()
{
    int someValues[10] = {7,8,8,6,6,6,1,21,11,7};

    int size = sizeof(someValues) / sizeof(someValues[0]);//gets lenght of the array

    for(int x = 0; x < size; x++) {//prints my array
        cout << someValues[x] << " ";
    }
    cout << "\n";

    shrink_array(someValues, size);

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
