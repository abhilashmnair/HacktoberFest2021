#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, l;
        cin >> n >> k >> l;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int max1 = *max_element(a.begin(), a.end() - 1);
        int dose = 0;
        int speed = 0;
        while (dose < l)
        {
            speed = speed + k;
            dose++;
        }
        bool temp = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == speed)
            {
                temp = true;
                break;
            }
        }
        if (temp==false)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}
