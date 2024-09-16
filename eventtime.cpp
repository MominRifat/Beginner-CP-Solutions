// Created By Momin_Rifat
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string ch;
    int d1, d2, h1, h2,m1, m2, s1, s2;
    cin >> ch >> d1;
    cin >> h1 >> ch >> m1 >> ch >> s1;
    cin >> ch >> d2;
    cin >> h2 >> ch >> m2 >> ch >> s2;

    int d = d2 - d1;
    int h = h2 - h1;
    int m = m2 - m1;
    int s = s2 - s1;

    if(s < 0)
    {
        s = s + 60;
        m--;
    }
    if(m < 0)
    {
        m = m + 60;
        h--;
    }
    if(h < 0)
    {
        h = h + 24;
        d--;
    }
    cout << d << " dia(s)" << endl;
    cout << h << " hora(s)" << endl;
    cout << m << " minuto(s)" << endl;
    cout << s << " segundo(s)" << endl;
    return 0;
}