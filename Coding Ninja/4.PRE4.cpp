#include <bits/stdc++.h>
using namespace std;

signed main()
{
  freopen("./IO/stdin.txt", "r", stdin);
  freopen("./IO/stdout.txt", "w", stdout);

  int n; //no_of_villages;
  cin >> n;
  int p[n]; //population_of_villages
  for (int i = 0; i < n; i++)
  {
    cin >> p[i];
  }
  for (int i = 0; i < n / 2; i++)
  {
    int grp = 0, spt = 0;
    grp = (p[i] + p[n - i - 1]) / 10;
    spt = (p[i] + p[n - i - 1]) % 10;
    cout << grp << " " << spt << "\n";
  }

  return 0;
}