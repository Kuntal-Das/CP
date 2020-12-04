#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int len, i, c = 1;
        string s;
        cin >> s;
        len = s.size();
        int h1[26] = {0}, h2[26] = {0};
        //Counting Occurance of Characters in 1st part of the string
        for (i = 0; i < len / 2; i++)
        {
            h1[s[i] - 97]++;
        }
        //Counting Occurance of Characters in 2nd part of the string
        for (i = (len % 2 == 0) ? len / 2 : len / 2 + 1; i < len; i++)
        {
            h2[s[i] - 97]++;
        }

        for (i = 0; i < len / 2; i++)
        {
            if (h1[i] != h2[i])
            {
                cout << "NO"
                     << "\n";
                c = false;
                break;
            }
        }
        if (c)
        {
            cout << "YES"
                 << "\n";
        }
    }
}
