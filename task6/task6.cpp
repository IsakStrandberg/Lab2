// task6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int vectorBaseStart() 
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

int main()
{
    
    vectorBaseStart();

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
