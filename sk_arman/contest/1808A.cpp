#include<bits/stdc++.h>
using namespace std;

int solve(int a)
{
    int minDigit = 9, maxDigit = 0;

    while (a > 0)
    {
        int digit = a % 10;
        minDigit = min(minDigit, digit);
        maxDigit = max(maxDigit, digit);
        a /= 10;
    }

    return maxDigit - minDigit;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int l, r;
        cin >> l >> r;

        int m = 0;
        int maxx = l;


        for (int i = l; i <= min(r,l+100); i++)
        {
            int c = solve(i);

            if (c > m)
            {
                m = c;
                maxx = i;
            }
        }

        cout << maxx << endl;
    }

    return 0;
}