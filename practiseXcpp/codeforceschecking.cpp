// Created By Momin_Rifat
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        char letter;
        cin >> letter;
        if(letter == 'c' || letter == 'o' || letter == 'd' || letter == 'e' || letter == 'f' || letter == 'o' || letter == 'r' || letter == 'c' || letter == 'e' || letter == 's')
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}