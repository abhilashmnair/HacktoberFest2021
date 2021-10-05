
#include <bits/stdc++.h>
using namespace std;

int bubble(vector<int> &nums)
{
  int i, j, n = nums.size(), len;
  // ++n;
  int dp[n + 1][n + 1];
  int a[n + 2];

  a[0] = 1;
  for (i = 0; i < n; ++i)
  {
    a[i + 1] = nums[i];
  }
  a[n + 1] = 1;

  for (len = 1; len <= n; ++len)
  {
    for (i = 1; i + len - 1 <= n; ++i)
    {
      j = i + len - 1;

      dp[i][j] = 0;
      if (len == 1)
        dp[i][j] = a[i - 1] * a[i] * a[i + 1];
      else
      {

        dp[i][j] = max(dp[i][j], a[i] * a[i - 1] * a[j + 1] + dp[i + 1][j]);
        dp[i][j] = max(dp[i][j], dp[i][j - 1] + a[i - 1] * a[j + 1] * a[j]);
        for (int k = i + 1; k < j; ++k)
        {
          dp[i][j] = max(dp[i][j], dp[i][k - 1] + a[i - 1] * a[k] * a[j + 1] + dp[k + 1][j]);
        }
      }
      // cout<<dp[i][j]<<' ';
    }
  }
  return dp[1][n];
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;
  vector<int> v(n);
  for (int &x : v)
    cin >> x;
  int ans = bubble(v);
  cout << ans;
  return 0;
}
