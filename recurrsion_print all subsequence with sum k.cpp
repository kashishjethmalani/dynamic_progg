#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl

void printSubseq(int ind, vector<int> &ds, int s, int sum, int arr[], int n)
{

    if (ind == n)
    {
        if (s == sum)
        {

            for (auto i : ds)
            {
                cout << i << " ";
            }
        }
    }

    ds.push_back(arr[ind]);
    s += arr[ind];
    printSubseq(ind + 1, ds, s, sum, arr, n);

    s -= arr[ind];
    ds.pop_back();
    printSubseq(ind + 1, ds, s, sum, arr, n);
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
