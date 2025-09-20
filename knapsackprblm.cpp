#include<iostream>
using namespace std;

// Recursive function to solve 0/1 Knapsack
int Knapsack(int W, int wt[], int val[], int n) {
    if (n == 0 || W == 0)
        return 0;

    if (wt[n - 1] > W)
        return Knapsack(W, wt, val, n - 1);

    return max(
        Knapsack(W, wt, val, n - 1),
        val[n - 1] + Knapsack(W - wt[n - 1], wt, val, n - 1)
    );
}

int main() {
    int val[] = {60, 100, 120};     // Values of items
    int wt[] = {10, 20, 30};        // Weights of items
    int W = 50;                     // Maximum capacity of knapsack
    int n = sizeof(val) / sizeof(val[0]);

    int maxValue = Knapsack(W, wt, val, n);
    cout << "Maximum value in Knapsack = " << maxValue << endl;

    return 0;
}