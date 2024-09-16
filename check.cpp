// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    int check;
    cin >> check;
    int a,b;
    cin >> a >> b;
    vector<int> :: iterator t = v.begin();
    t = t + check - 1;
    v.erase(t);
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    vector<int> :: iterator a1 ,b1;
    a1 = v.begin() + a - 1;
    b1 = v.begin() + b - 1;
    v.erase(a1,b1);

    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}