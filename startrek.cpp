// Created By Momin_Rifat
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int total_ship = 0;
    int farm_visit = 0;
    long long int stole_ship = 0;
    vector<long long int> ship(n);
    
    for(int i = 0; i < n; i++)
    {
        cin >> ship[i];
        total_ship += ship[i];
    }
    
    int i = 0;
    unordered_set<int> visited_farms;
    while(i >= 0 && i < n)
    {
        if (visited_farms.find(i) == visited_farms.end())
        {
            farm_visit++; 
            visited_farms.insert(i); 
        }
        
        if (ship[i] % 2 != 0)
        {
            ship[i]--;
            stole_ship++;
            i++;
        }
        else
        {
            if (ship[i] > 0)
            {
                ship[i]--;
                stole_ship++;
            }
            i--;
        }
        if (i < 0 || i >= n) 
        {
            break;
        }
    }
    
    long long int not_stole_ship = total_ship - stole_ship;
    cout << farm_visit << " " << not_stole_ship << endl;
    
    return 0;
}
