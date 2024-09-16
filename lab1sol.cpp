//Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int i,n;

    cin >> n;

    for(i=0;i<n;i++)
    {
        cin >> str;
        int len = str.size();
        if(len>10)
        {
            cout << str[0] << len - 2 << str[len - 1] << endl;
        }
        else
        {
            cout << str << endl;
        }
    }
    return 0;
}
