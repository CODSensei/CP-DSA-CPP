#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        for (int j = n - i; j > 0; j--)
            cout << "  ";
        for (int k = 2 * i - 1; k > 0; k--)
            cout << "* ";
        cout << "\n";
    }
    return 0;
}