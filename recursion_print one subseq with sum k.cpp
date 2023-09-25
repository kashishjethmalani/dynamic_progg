

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl

bool printSubseq(int ind, vector<int> &ds, int s, int sum, int arr[], int n)
{

    if (ind == n)
    {
        if (s == sum)
        {

            for (auto i : ds)
            {
                cout << i << " ";
            }
            cout << endl;
            return 1;
        }
        else
            return 0;
    }

    ds.push_back(arr[ind]);
    s += arr[ind];
    if (printSubseq(ind + 1, ds, s, sum, arr, n) == true)
    {
        return 1;
    }

    s -= arr[ind];
    ds.pop_back();
    if (printSubseq(ind + 1, ds, s, sum, arr, n) == true)
    {
        return 1;
    }
    return false;
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
