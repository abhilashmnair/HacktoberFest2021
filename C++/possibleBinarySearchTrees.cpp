#include <bits/stdc++.h>
#define int long long
using namespace std;
int numberOfTrees(int n)
{
    vector<int> dp(n + 1, 0);

    dp[0] = 1;
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
            dp[i] += dp[j] * dp[i - j - 1];
    }
    return dp[n];
}
int32_t main()
{
    int n;
    cout << "Enter number of keys" << endl;
    cin >> n;

    cout << "Total number of possible binary search tree with " << n << " keys " << numberOfTrees(n) << endl;
}
/*

total number of possible binary search tree with n different keys(catalan number)
*/
