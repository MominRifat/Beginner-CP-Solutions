// Created By Momin_Rifat
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string number;
        cin >> number;
        int count = 0;
        for(int i = 0; i < number.size(); i++)
        {
            if(number[i] == '0')
            {
                count += 6;
            }
            else if(number[i] == '1')
            {
                count += 2;
            }
            else if(number[i] == '2')
            {
                count += 5;
            }
            else if(number[i] == '3')
            {
                count += 5;
            }
            else if(number[i] == '4')
            {
                count += 4;
            }
            else if(number[i] == '5')
            {
                count += 5;
            }
            else if(number[i] == '6')
            {
                count += 6;
            }
            else if(number[i] == '7')
            {
                count += 3;
            }
            else if(number[i] == '8')
            {
                count += 7;
            }
            else if(number[i] == '9')
            {
                count += 6;
            }
        }
        cout << count << " leds" << endl;
    }
    return 0;
}