#include <iostream>
#include <vector>

using namespace std;

int binary_search(int element, const vector<int>& arr) {
    int low = 0, high = arr.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;  // Avoids integer overflow

        if (arr[mid] == element) {
            return mid;  // Element found, return index
        } else if (arr[mid] < element) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;  // Element not found
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 9, 11, 13, 15};  // Sorted array
    int element = 7;

    int index = binary_search(element, arr);

    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}
