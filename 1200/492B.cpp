#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    double l;
    cin >> n >> l;

    vector<double> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    double val = 0;

    for(int i = 1; i < n; i++) {
        val = max(val, arr[i] - arr[i-1]);
    }

    double ans = max(val / 2.0, max(arr[0], l - arr[n-1]));

    cout << fixed << setprecision(10) << ans << endl;
}
