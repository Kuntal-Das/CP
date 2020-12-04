#include <bits/stdc++.h>
using namespace std;

void show(int *arr, int n)
{
  for (int i = 0; i < n && arr[i] != 0; i++)
    cout << arr[i] << " ";
}

int sumOfArr(int *arr, int n)
{
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += arr[i];
  }
  return sum;
}

signed main()
{
  freopen("./IO/stdin.txt", "r", stdin);
  freopen("./IO/stdout.txt", "w", stdout);

  int n, target, i = 0, sum = 0, isPossible = 0;
  cin >> n >> target;
  int marbles[n] = {0};
  while (i < n)
  {
    int x;
    cin >> x;
    if (x <= target)
    {
      sum += x;
      marbles[isPossible] = x;
      isPossible++;
    }
    i++;
  }
  if (sum < target || isPossible < 2)
  {
    cout << "false"
         << "\n";
    return 0;
  }
  if (sum == target)
  {
    cout << "true"
         << "\n";
    show(marbles, n);
    return 0;
  }
  // int sub_marbles[n] = {0};
  int sub_i = -1;
  for (int i = 0; i < isPossible; i++)
  {
    if (marbles[i] == target)
    {
      cout << "true\n"
           << marbles[i];
      return 0;
    }
    int sub[isPossible] = {0};
    sub[0] = marbles[i];
    for (int j = i + 1; j < isPossible; j++)
    {
      sub[1] = marbles[j];
      if (sumOfArr(sub, 2) == target)
      {
        cout << "true\n";
        show(sub, 2);
        return 0;
      }
    }
  }
  cout << "false\n";
  return 0;
}