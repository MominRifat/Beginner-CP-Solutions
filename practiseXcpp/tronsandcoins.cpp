// Created By Momin_Rifat
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string coin;
        cin >> coin;
        int till = n;
        int count = 0;

        for(int i = 0; i < n - 1; i++)
        {
            if(coin[i] == '*' && coin[i+1] == coin[i])
            {
                till = i;
                break;
            }
        }
        for(int i = 0; i < till; i++)
        {
            if(coin[i] == '@')
            {
                count ++;
            }
        }

        cout << count << endl;
    }
    return 0;
}
