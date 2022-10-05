// ch4pileOfCoins.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    std::cout << "Ch 4 Random Coins by Kevin Bell\n\n";
    unsigned seed;
    seed = time(0);
    srand(seed);
    auto quarters = rand() % 4 + 1, dimes = rand() % 4 + 1, nickels = rand() % 4 + 1, pennies = rand() % 4 + 1;
    auto total = 0.0, quarter = .25, dime = .10, nickel = .05, penny = .01;
    string answer;
    cout << "Number of Quarters: " << quarters << endl;
    cout << "Number of Dimes: "<<dimes << endl;
    cout << "Number of Nickels: "<< nickels << endl;
    cout << "Number of Pennies: "<< pennies << endl;
    total = quarters * quarter + dimes * dime + nickels * nickel + pennies * penny;
    cout << "Do these coins total" << endl;
    cout << "\tmore than a dollar (m)," << endl;
    cout << "\tless than a dollar (l)," << endl;
    cout << "\tor exactly a dollar (x)? ";
    getline(cin, answer);
    cout << "Total of the coins: " << total << endl;
    if (answer == "m") {
        if (total >1.00) {
            cout << "You are correct, these coins are more than a dollar!"<<endl;
        }
        else {
            cout << "Incorrect - the total is less than a dollar"<<endl;
        }
    }
    else if (answer == "l") {
        if (total < 1.00) {
            cout << "You are correct, these coins are less than a dollar!" << endl;
        }
        else {
            cout << "Incorrect - the total is more than a dollar" << endl;
        }
    }
    else if (answer == "x") {
        if (total == 1.00) {
            cout << "You are correct, these coins are exactly a dollar!"<<endl;
        }
        else {
            cout << "Incorrect - the total is not exactly a dollar" << endl;
        }
    }
    //Keep window open til done
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
