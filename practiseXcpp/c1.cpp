// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
bool issqrMatrix(const string &num,int len)
{
    int rootlen = sqrt(len);
    if(rootlen * rootlen != len)
    {
        return false;
    }
    for(int i = 0; i < rootlen; ++i)
    {
        if(num[i] != '1' != num[i * rootlen + rootlen - 1])
        {
            return false;
        }
        for(int j = 1; j < rootlen - 1; ++j)
        {
            if(num[i * rootlen +j] != '0')
            {
                return false;
            }
        }
    }
    return 0;
}
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int len;
        cin >> len;
        string num;
        cin >> num;
        if(issqrMatrix(num,len))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}