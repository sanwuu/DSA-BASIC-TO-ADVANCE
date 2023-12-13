#include <iostream>
#include <vector> // Include vector header

using namespace std;

int binaryIndex(vector<int> arr, int target) {
    // find the middle element of array
    
    int l = 0;  // Start of the array
    int r = arr.size() - 1;  // End of the array

    while (l <= r) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] > target)
            r = mid - 1;
        else
            l = mid + 1;
    }

    return -1;  // Element not found
}

int main() {
    // take array
    vector<int> arr = {1, 2, 3, 4, 5};
    int target = 3;

    int result = binaryIndex(arr, target);

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found." << endl;

    return 0;
}
