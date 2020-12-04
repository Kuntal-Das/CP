#include <bits/stdc++.h>
using namespace std;

signed main()
{
  freopen("./IO/stdin.txt", "r", stdin);
  freopen("./IO/stdout.txt", "w", stdout);

  int n, p;
  cin >> n;
  int odd = 0, evn = 0; //arr[n]={0};
  for (int i = 0; i < n; i++)
  {
    cin >> p;
    if (i % 2 == 0 && p % 2 == 0)
    {
      evn += p;
    }
    else if (i % 2 != 0 && p % 2 != 0)
    {
      odd += p;
    }
  }
  cout << evn << " " << odd << "\n";
  return 0;
}
