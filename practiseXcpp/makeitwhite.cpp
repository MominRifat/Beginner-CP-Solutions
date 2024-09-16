// Created By Momin_Rifat
#include<iostream>
#include<string>
using namespace std;

int min_segment(int n, const string& s) 
{
    int start_idx = -1, end_idx = -1;
    for(int i = 0; i < n; i++) 
    {
        if(s[i] == 'B') 
        {
            if(start_idx == -1)
            {
                start_idx = i;
            }
            end_idx = i;
        }
    }
    return end_idx - start_idx + 1;
}

int main() 
{
    int t;
    cin >> t;

    for(int i = 0; i < t; i++) 
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int result = min_segment(n, s);
        cout << result << endl;
    }
    return 0;
}
