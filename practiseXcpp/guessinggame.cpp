// Created By Momin_Rifat
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int guess_number;
    cout << "Enter Any Number From (1 - 10) :" << endl; 

    while(1)
    {
        cout << "Enter Your Gussing Number :" << endl;
        cin >> guess_number;
        int random_number = rand() % 10 + 1;
        if(guess_number == 5)
        {
            cout << "Your are Win" << endl;
        }
        else
        {
            cout << "You are loss" << endl;
            cout << "Guessing Number is :" << random_number << endl;
        }
    }
    return 0;
}