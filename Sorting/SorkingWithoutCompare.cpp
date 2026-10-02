#include <iostream>
#include <vector>
using namespace std;

vector<int> countingSort(const vector<int> &A, int k) {
    int n = A.size();
    
    vector<int> c(k + 1, 0);  // count array
    vector<int> B(n);         // output array

    // Step 1: Count frequency
    for (int j = 0; j < n; j++) {
        c[A[j]] = c[A[j]] + 1;
    }

    // Step 2: Prefix sum
    for (int i = 1; i <= k; i++) {
        c[i] = c[i] + c[i - 1];
    }

    // Step 3: Build sorted array (stable)
    for (int j = n - 1; j >= 0; j--) {
        B[c[A[j]] - 1] = A[j];
        c[A[j]] = c[A[j]] - 1;
    }

    return B;
}

int main() {
    int n, k;
    cin >> n;

    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    cin >> k;

    vector<int> B = countingSort(A, k);

    cout << "\nSorted array:\n";
    for (int x : B) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
