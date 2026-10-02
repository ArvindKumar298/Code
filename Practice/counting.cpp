#include <iostream>
using namespace std;

int main() {
    int n = 8;
    int A[n] = {2,5,3,0,2,3,0,3};

    int K = A[0];
    for(int i=0; i<n; i++) {
        if(K < A[i]) {
            K = A[i];
        }
    }

    int C[K+1] = {0};
    int B[n];

    // Count frequency
    for(int i=0; i<n; i++) {
        C[A[i]]++;
    }

    // Prefix sum
    for(int i=1; i<=K; i++) {
        C[i] += C[i-1];
    }

    // Build output array
    for(int i=n-1; i>=0; i--) {
        B[C[A[i]] - 1] = A[i];
        C[A[i]]--;
    }

    cout << "sorted array :" << endl;
    for(int i=0; i<n; i++) {
        cout << B[i] << " ";
    }
}
