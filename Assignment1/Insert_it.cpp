#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int* A = new int[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int M;
    cin >> M;

    int* B = new int[M];
    for (int i = 0; i < M; i++) {
        cin >> B[i];
    }

    int X;
    cin >> X;

    int* C = new int[N + M];

    for (int i = 0; i < X; i++) {
        C[i] = A[i];
    }

    for (int i = 0; i < M; i++) {
        C[X + i] = B[i];
    }

    for (int i = X; i < N; i++) {
        C[M + i] = A[i];
    }

    for (int i = 0; i < N + M; i++) {
        cout << C[i] << " ";
    }
    cout << endl;

    delete[] A;
    delete[] B;

    return 0;
}