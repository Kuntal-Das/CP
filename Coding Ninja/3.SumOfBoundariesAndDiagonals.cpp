#include <bits/stdc++.h>
using namespace std;

signed main()
{
  freopen("./IO/stdin.txt", "r", stdin);
  freopen("./IO/stdout.txt", "w", stdout);
  int t;
  cin >> t;
  while (t--)
  {
    int n = 0, p, sum = 0;
    cin >> n;
    int mid = (n % 2 != 0) ? (n / 2 + 1) : 0;
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        cin >> p;
        if ((i == 0 || j == 0 || i == n - 1 || j == n - 1))
        {
          sum += p;
        }
        else if ((i == j && i + j != n - 1))
        {
          sum += p;
        }
        else if (i + j == n - 1)
        {
          sum += p;
        }
      }
    }
    cout << sum << "\n";
  }
  return 0;
}