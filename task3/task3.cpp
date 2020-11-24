// task3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <array>
#include <time.h>
using namespace std;

int array_rows_cols(int lista[20][20], int xs,int ys)
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

int main()
{
    srand(time(NULL));//uses system time as seed for random number
    int xs;
    int ys;
    cout << "Rows(please dont go higher than 20): ";
    cin >> xs;
    cout << "Columns(please dont go higher than 20): ";
    cin >> ys;
    int list[20][20];//not nessecary to have more than 20 rows and columns...usually

    for (int x = 0; x < xs; x++) {//goes [0][0]-[0][1]....[1][0]etc...
        for (int z = 0; z < ys; z++) {
            list[x][z] = rand()%10;//adds the random number to []>[]<
        }// the % gives me the last number from the random number, 0 -9
    }

    array_rows_cols(list,xs,ys);

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
