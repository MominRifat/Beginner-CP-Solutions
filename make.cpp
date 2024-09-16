// Created By Momin_Rifat
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        vector<int> num(n);
        int new_max_count = 1;
        int old_max_count = 1;

        for(int i = 0; i < n; i++)
        {
            cin >> num[i];
        }
        sort(num.begin(),num.end());
        for(int i = 0; i < n - 1; i++)
        {
            if(num[i] == num[i + 1])
            {
                new_max_count++;
            }
            else
            {
                old_max_count = max(old_max_count,new_max_count);
                new_max_count = 1;
            }
        }
        old_max_count = max(old_max_count, new_max_count);
        int ans = n - old_max_count;
        cout << ans << endl;
    }
    return 0;
}