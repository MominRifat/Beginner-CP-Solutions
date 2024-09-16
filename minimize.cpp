// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        pair<int,int> ab[n];
        for(int i = 0;i < n;++i)
        {
            cin >> ab[i].first;
        }
        for(int i = 0;i < n;++i)
        {
            cin >> ab[i].second;
            cout << i;
        }
        sort(ab,ab+n);
        for(int i = 0;i < n;++i)
        {
            cout << ab[i].first << ' ';
        }
        cout << endl;
        for(int i = 0;i < n;++i)
        {
            cout << ab[i].second << ' ';
        }
        cout << endl;
    }
}