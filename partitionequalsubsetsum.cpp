#include<iostream>
using namespace std;

bool equalPartition(int arr[], int N, int targetSum) {
    if (targetSum == 0) return true;
    if (N == 0) return false;

    if (arr[N - 1] > targetSum)
        return equalPartition(arr, N - 1, targetSum);

    return equalPartition(arr, N - 1, targetSum) ||
           equalPartition(arr, N - 1, targetSum - arr[N - 1]);
}

bool canPartition(int arr[], int N) {
    int totalSum = 0;
    for (int i = 0; i < N; i++)
        totalSum += arr[i];

    if (totalSum % 2 != 0)
        return false;

    return equalPartition(arr, N, totalSum / 2);
}

int main() {
    int arr[] = {1, 5, 11, 5};
    int N = sizeof(arr) / sizeof(arr[0]);

    cout << boolalpha << canPartition(arr, N) << endl; // Output: true
    return 0;
}