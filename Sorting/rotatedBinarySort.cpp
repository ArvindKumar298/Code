#include <iostream>
using namespace std;

int main() {
    int n = 8;
    int arr[8] = {3,4,5,6,7,0,1,2};
    int target = 1;
    int start = 0, end = n - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (target == arr[mid]) {
            cout << mid;
            break;
        }

        // Left half sorted
        if (arr[start] <= arr[mid]) {
            if (target >= arr[start] && target <= arr[mid]) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        // Right half sorted
        else {
            if (target >= arr[mid] && target <= arr[end]) {
                start = mid + 1;   
            } else {
                end = mid - 1;
            }
        }
    }

    return 0;
}
