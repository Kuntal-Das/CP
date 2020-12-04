#include <bits/stdc++.h>
using namespace std;

int main()
{
  freopen("./IO/stdin.txt", "r", stdin);
  freopen("./IO/stdout.txt", "w", stdout);

  int r, s, tickets;
  cin >> r >> s;
  cin >> tickets;
  int nos = r * s;
  if (nos >= tickets)
  {
    cout << tickets << " "
         << 0 << "\n";
  }
  else
  {
    cout << nos << " "
         << (tickets - nos) << "\n";
  }

  return 0;
}