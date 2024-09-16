// Created By Momin_Rifat
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int num[n];
        for(int i = 0; i < n; i++)
        {
            cin >> num[i];
        }
        int count = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                if(i + j + 2 == num[i] * num[j])
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
