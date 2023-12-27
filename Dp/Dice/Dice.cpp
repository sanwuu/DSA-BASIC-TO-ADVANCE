#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int countWays(int n) {
    // Base case
    if (n == 0) {
        return 1;
    }

    int ways = 0;

    // Recursion: Consider all possible outcomes of a dice throw
    for (int i = 1; i <= 6; i++) {
        if (n - i >= 0) {
            ways = (ways + countWays(n - i)) % MOD;
        }
    }

    return ways;
}

int main() {
    int n ;
    cin>>n;


    int ways = countWays(n);
    cout << ways << endl;

    return 0;
}
