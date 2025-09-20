#include<iostream>
using namespace std;

// Recursive function to count the number of ways to make sum S
int countWays(int coins[], int n, int S) {
    // Base cases
    if (S == 0)
        return 1;
    if (S < 0)
        return 0;
    if (n == 0 && S > 0)
        return 0;

    // Recursive case: exclude current coin + include current coin
    return countWays(coins, n - 1, S) + countWays(coins, n, S - coins[n - 1]);
}

int main() {
    int coins[] = {1, 2, 3}; // Example coin denominations
    int n = sizeof(coins) / sizeof(coins[0]);
    int sum = 4;

    cout << "Number of ways to make sum " << sum << " is: " << countWays(coins, n, sum) << endl;

    return 0;
}