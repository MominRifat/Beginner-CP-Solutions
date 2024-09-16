// Created By Momin_Rifat
#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) 
        {
            cin >> a[i];
        }

        int m;
        cin >> m;
        for(int i = 0; i < m; i++) 
        {
            string q;
            cin >> q;
            map<int, char> p;
            vector<int> v(26, -1);
            
            if(q.size() != n) 
            {
                cout << "NO" << endl;
                continue;
            }

            bool ans = true;
            for(int j = 0; j < n; j++) 
            {
                int d = q[j] - 'a';
                if(p.find(a[j]) != p.end()) 
                {
                    if(p[a[j]] != q[j]) 
                    {
                        ans = false;
                        break;
                    }
                } 
                else 
                {
                    if(v[d] != -1 && v[d] != a[j]) 
                    {
                        ans = false;
                        break;
                    }
                    p[a[j]] = q[j];
                    v[d] = a[j];
                }
            }

            if(ans) 
            {
                cout << "YES" << endl;
            } 
            else 
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
