#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Recursive helper function
int editDistance(string& word1, string& word2, int m, int n) {
    if (m == 0) return n; // Insert all remaining characters of word2
    if (n == 0) return m; // Remove all remaining characters of word1

    if (word1[m - 1] == word2[n - 1]) {
        return editDistance(word1, word2, m - 1, n - 1); // No operation needed
    } else {
        return 1 + min({
            editDistance(word1, word2, m, n - 1),    // Insert
            editDistance(word1, word2, m - 1, n),    // Remove
            editDistance(word1, word2, m - 1, n - 1) // Replace
        });
    }
}

int main() {
    string word1 = "horse";
    string word2 = "ros";

    int m = word1.length();
    int n = word2.length();

    int distance = editDistance(word1, word2, m, n);
    cout << "Edit Distance between \"" << word1 << "\" and \"" << word2 << "\" is: " << distance << endl;

    return 0;
}