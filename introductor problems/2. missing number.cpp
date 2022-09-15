#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int ans;
    int num;

    // using bitwise operator
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        ans ^= i;
    }
    for (int i = 1; i < n; i++)
    {

        cin >> num;
        ans ^= num;
    } // n-1 times

    cout << ans;
    // there will be n-1 numbers
    // n = 5
    // input: 5 2 1 3 i.e from 1 to n (inclusive) but one number less
}
