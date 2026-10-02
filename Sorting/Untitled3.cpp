#include <bits/stdc++.h>
using namespace std;

// Function to get the maximum element from the array
int getMax(int array[], int n) {
    int mx = array[0]; // assume first element is max
    for (int i = 1; i < n; i++) {
        if (array[i] > mx)
            mx = array[i]; // update max if larger element found
    }
    return mx;
}

// Counting sort based on digit (place value)
void countingSort(int array[], int size, int place) {
    const int max = 10; // digits range from 0–9
    vector<int> output(size); // output array
    int count[max] = {0};     // initialize count array with 0

    // Step 1: Count occurrences of digits
    for (int i = 0; i < size; i++) {
        int digit = (array[i] / place) % 10;
        count[digit]++;
    }

    // Step 2: Convert count[] to cumulative count[]
    for (int i = 1; i < max; i++) {
        count[i] += count[i - 1];
    }

    // Step 3: Build output array (iterate from end for stability)
    for (int i = size - 1; i >= 0; i--) {
        int digit = (array[i] / place) % 10;
        output[count[digit] - 1] = array[i];
        count[digit]--;
    }

    // Step 4: Copy sorted elements back to original array
    for (int i = 0; i < size; i++) {
        array[i] = output[i];
    }
}

// Main Radix Sort function
void radixsort(int array[], int size) {
    int mx = getMax(array, size); // get largest number

    // Apply counting sort for every digit (units, tens, hundreds...)
    for (int place = 1; mx / place > 0; place *= 10) {
        countingSort(array, size, place);
    }
}

// Function to print array
void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

// Driver code
int main() {
    int array[] = {121, 432, 564, 23, 1, 45, 788};
    int n = sizeof(array) / sizeof(array[0]);

    radixsort(array, n); // perform sorting
    printArray(array, n); // print sorted array

    return 0;
}
