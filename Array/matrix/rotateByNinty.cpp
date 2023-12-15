#include<iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[n][m];

    // Input
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    // Transpose (swap elements)
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++) {  // Fix: Change n/2 to m
            swap(arr[i][j], arr[j][i]);
        }
    }

    // Print
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;  // Add newline for better formatting
    }

    return 0;
}
