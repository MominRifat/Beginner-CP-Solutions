// Created By Momin_Rifat
#include<iostream>
using namespace std;
int main()
{
    int num = 1001;
    int i = 1;
    while(num--  && num != 0)
    {
        cout << num << "\t";
        if(i % 5 == 0)
        {
            cout << endl;
        }
        i++;
    }
    return 0;
}