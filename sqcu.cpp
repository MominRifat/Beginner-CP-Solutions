// Created By Momin_Rifat
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int row;
    cin >> row;
    for(int i = 1; i <= row; i++)
    {
        for(int j = 1; j <= 3; j++)
        {
            cout << pow(i,j);
            if(j <= 2)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}