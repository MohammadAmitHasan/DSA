#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    int a[n];
    int pre[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i == 0) {
            pre[i] = a[i];
        } else {
            pre[i] = pre[i - 1] + a[i];
        }
    }

    while (q--) {
        long long l, r;
        cin >> l >> r;
        l--;
        r--;
        long long sum;
        if (l == 0) {
            sum = pre[r];
        } else {
            sum = pre[r] - pre[l - 1];
        }

        // Without optimisation
        // for (int i = l; i <= r; i++) {
        //     sum += a[i];
        // }
        // optimisation using prefix sum in range sum query

        cout << sum << endl;
    }

    return 0;
}