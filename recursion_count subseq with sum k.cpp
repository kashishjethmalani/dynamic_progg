

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl

int printSubseq(int ind, int s, int sum, int arr[], int n)
{

    if (ind == n)
    {
        if (s == sum)
        {
            return 1;
        }
        else
            return 0;
    }
    s += arr[ind];
    int l = printSubseq(ind + 1, s, sum, arr, n);
    s -= arr[ind];
    int r = printSubseq(ind + 1, s, sum, arr, n);

    return l + r;
}

void solve()
{
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << setprecision(10) << fixed;

    int testCases = 1;
    // cin >> testCases;
    while (testCases--)
        solve();
}
