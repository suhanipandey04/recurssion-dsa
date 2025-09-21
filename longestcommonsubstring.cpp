#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int longestCommonSubsequence(string s1, string s2) {
        int m = s1.length();
        int n = s2.length();

        if (m == 0 || n == 0)
            return 0;

        if (s1[m - 1] == s2[n - 1])
            return 1 + longestCommonSubsequence(s1.substr(0, m - 1), s2.substr(0, n - 1));
        else
            return max(longestCommonSubsequence(s1.substr(0, m - 1), s2),
                       longestCommonSubsequence(s1, s2.substr(0, n - 1)));
    }
};

int main() {
    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;

    Solution sol;
    int result = sol.longestCommonSubsequence(str1, str2);
    cout << "Length of Longest Common Subsequence: " << result << endl;

    return 0;
}