#include <bits/stdc++.h>
using std::cout;

void solve(int tar, int *arr, int n)
{
  int start = 0, end = 0;
  int sum = arr[0];
  while (start < n && end < n)
  {
    if (sum < tar)
    {
      end++;
      sum += arr[end];
    }
    else if (sum > tar)
    {
      sum -= arr[start];
      start++;
    }
    else
    {
      cout << "true\n";
      for (int i = start; i <= end; i++)
      {
        cout << arr[i] << " ";
      }
      return;
    }
  }
  printf("false\n");
}

int main()
{
  freopen("./IO/stdin.txt", "r", stdin);
  freopen("./IO/stdout.txt", "w", stdout);

  int tar, n;
  std::cin >> n >> tar;
  int *arr = new int[n];
  for (int i = 0; i < n; i++)
  {
    std::cin >> arr[i];
  }
  solve(tar, arr, n);
  return 0;
}