// Created By Momin_Rifat
#include<iostream>
using namespace std;
int main()
{     
    int tt;
    cin >> tt;
    for(int i = 1; i <= tt; i++)
    {
        int num;
        cin >> num;
        cout << "Case" << " " << i << ":" << " ";
        for(int i = 1; i <= num; i++)
        {
            if(num % i == 0)
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }      
    return 0;
}