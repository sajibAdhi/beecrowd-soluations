#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll n, m, u;

    cin >> n >> m >> u;
    ll A[n], L, R, v, p;
    int k, i = 0, j = 0;

    // n Lines OF Integers
    for (i = 0; i < n; i++)
        cin >> A[i];

    // M lines of 4 Integers
    for (i = 0; i < m; i++)
    {
        cin >> L >> R >> v >> p;
        if (L > R || R > n || v > u || p > n)
            exit(0);

        // Calculate K
        k = 0;
        for (j = L-1; j <= R; j++)
        {
            if (A[j] < v)
                k++;
        }

        A[p-1] = u * k / (R - L + 1);
    }

    for (i = 0; i < n; i++)
        cout << A[i] << endl;
    cout <<endl;

    return 0;
}