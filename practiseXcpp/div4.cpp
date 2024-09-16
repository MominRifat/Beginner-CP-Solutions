// Created By Momin_Rifat
#include<iostream>
using namespace std;
char find_missing_letter(char square[3][3]) 
{
    char letters[] = {'A', 'B', 'C'};
    for(int i = 0; i < 3; ++i) 
    {
        int count[3] = {0};
        for(int j = 0; j < 3; ++j) 
        {
            if(square[i][j] != '?') 
            {
                count[square[i][j] - 'A']++;
            }
        }
        for(int j = 0; j < 3; ++j) 
        {
            if(square[i][j] == '?' && count[0] == 0) 
            {
                return 'A';
            }
            if(square[i][j] == '?' && count[1] == 0) 
            {
                return 'B';
            }
            if(square[i][j] == '?' && count[2] == 0) 
            {
                return 'C';
            }
        }
    
    for(int j = 0; j < 3; ++j) 
    {
        int count[3] = {0};
        for(int i = 0; i < 3; ++i) 
        {
            if(square[i][j] != '?') 
            {
                count[square[i][j] - 'A']++;
            }
        }
        for(int i = 0; i < 3; ++i) 
        {
            if(square[i][j] == '?' && count[0] == 0) 
            {
                return 'A';
            }
            if(square[i][j] == '?' && count[1] == 0) 
            {
                return 'B';
            }
            if(square[i][j] == '?' && count[2] == 0) 
            {
                return 'C';
            }
        }
    }
    }
    return ' ';
}

int main() 
{
    int t;
    cin >> t;

    while(t--) 
    {
        char latin_square[3][3];
        for(int i = 0; i < 3; ++i) 
        {
            for(int j = 0; j < 3; ++j) 
            {
                cin >> latin_square[i][j];
            }
        }

        char result = find_missing_letter(latin_square);
        cout << result << endl;
    }

    return 0;
}
