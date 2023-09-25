

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl



void printSubseq(int ind, vector<int>&ds, int arr[], int n){

    if(ind==n){
        for(auto i:ds){
            cout<< i << " ";
        }

        if(ds.size()==0){
            cout<<"{}";
        }
        cout<<endl;
        return;
    }

    printSubseq(ind+1, ds, arr, n);
    ds.push_back(arr[ind]);
    printSubseq(ind+1, ds, arr, n);
    ds.pop_back();
    

}

void solve(){
    
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
