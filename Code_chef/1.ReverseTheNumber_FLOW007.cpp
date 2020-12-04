#include <iostream>
using namespace std;

int main()
{
    int t, i;
    // cout << "\n->>";
    cin >> t;
    if (t < 1 || t > 1000)
        return -1;
    int nums[t], n[t];
    for (i = 0; i < t; i++)
    {
        n[i] = 0;
        // cout << "\n->>";
        cin >> nums[i];

        while (nums[i] != 0)
        {
            n[i] = (n[i] * 10) + (nums[i] % 10);
            nums[i] = nums[i] / 10;
        }
    }
    for (int i : n)
    {
        cout << i << endl;
    }

    return 0;
}