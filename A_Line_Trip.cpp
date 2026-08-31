#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int diff = arr[0];  

    for (int i = 1; i < n; i++) {
        diff = max(diff, arr[i] - arr[i - 1]);
    }

    diff = max(diff, 2 * (x - arr[n - 1]));

    cout << diff << endl ;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}