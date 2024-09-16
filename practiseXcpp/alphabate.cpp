// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        string word;
        cin >> word;
        int n;
        cin >> n;
        for(int i = 0; i < word.size(); i++)
        {
             word[i] = 'A' + (word[i] - 'A' - n + 26) % 26;
        }
        for(auto c : word)
        {
            cout << c;
        }
        cout << endl;
    }

    return 0;
}