#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    long long pre[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i == 0) {
            pre[i] = a[i];
        } else {
            pre[i] = pre[i - 1] + a[i];
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        cout << pre[i] << " ";
    }

    return 0;
}