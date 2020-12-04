#include "iostream"
#include <bits/stdc++.h>

#define ll long long
using namespace std;

int main()
{
    ll t; //= inputN();
    cin >> t;
    ll cus[t];
    for (ll i = 0; i < t; i++)
    {
        cin >> cus[i];
    }
    sort(cus, cus + t);
    ll Mprofit = 0;
    for (ll i = 0; i < t; i++)
    {
        ll x= cus[i]*(t-i);
        Mprofit = ( x > Mprofit) ? x : Mprofit;
    }
    cout << Mprofit << endl;
    return 0;
}