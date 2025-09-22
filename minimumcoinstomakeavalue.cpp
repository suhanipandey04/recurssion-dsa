#include <iostream>
#include <climits>
using namespace std;

int mincoins(int coins[], int n, int sum) {
    if (sum == 0) return 0;
    if (n == 0) return INT_MAX;

    if (coins[n - 1] > sum) {
        return mincoins(coins, n - 1, sum);
    } else {
        int exclude = mincoins(coins, n - 1, sum);
        int include = mincoins(coins, n, sum - coins[n - 1]);
        if (include != INT_MAX)
            include += 1;
        return min(exclude, include);
    }
}

int main() {
    int coins[] = {25,10,5};
    int sum = 30;
    int n = sizeof(coins) / sizeof(coins[0]);

    int result = mincoins(coins, n, sum);
    if (result == INT_MAX)
        cout << "Not possible to make the sum with given coins." << endl;
    else
        cout << "Minimum coins required: " << result << endl;

    return 0;
}