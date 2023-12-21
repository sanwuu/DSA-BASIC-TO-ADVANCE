#include<iostream>
#include<vector>
using namespace std;

int knap(vector<int>& wei, vector<int>& val, int weight, int n) {
    // Base case
    if (n == 0 || weight == 0) {
        return 0;
    }

    // If the weight of the current item is more than the remaining capacity, skip it
    if (wei[n - 1] > weight) {
        return knap(wei, val, weight, n - 1);
    }

    // Return the maximum of two cases:
    // 1. Include the current item in the knapsack
    // 2. Exclude the current item from the knapsack
    return max(val[n - 1] + knap(wei, val, weight - wei[n - 1], n - 1),
               knap(wei, val, weight, n - 1));
}

int main() {
    int weight;
    cin >> weight;

    int n = 5; // Assuming you have 5 items
    vector<int> wei(n), val(n);

    for (int i = 0; i < n; i++) {
        cin >> val[i] >> wei[i];
    }

    int ans = knap(wei, val, weight, n);
    cout << ans << endl;

    return 0;
}
