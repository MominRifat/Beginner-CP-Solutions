// Created By Momin_Rifat
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string sentence;
        getline(cin, sentence);
        int len = sentence.size();
        int half = len / 2;
        string first_half = sentence.substr(0, len / 2);
        string second_half = sentence.substr(len / 2);

        reverse(first_half.begin(), first_half.end());
        reverse(second_half.begin(), second_half.end());

        cout << first_half + second_half << endl;
    }
    return 0;
}