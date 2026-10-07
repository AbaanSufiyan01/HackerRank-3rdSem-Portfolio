#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>
using namespace std;

/**
 * Calculates the absolute difference between the sums of its diagonals.
 * Time Complexity: O(N)
 * Space Complexity: O(1)
 */
int diagonalDifference(const vector<vector<int>>& arr) {
    int n = arr.size();
    int primaryDiagonalSum = 0;
    int secondaryDiagonalSum = 0;

    for (int i = 0; i < n; i++) {
        primaryDiagonalSum += arr[i][i];
        secondaryDiagonalSum += arr[i][n - 1 - i];
    }

    return abs(primaryDiagonalSum - secondaryDiagonalSum);
}

int main() {
    // Test Case 1: Standard 3x3 square matrix
    vector<vector<int>> matrix1 = {
        {11, 2, 4},
        {4, 5, 6},
        {10, 8, -12}
    };
    int res1 = diagonalDifference(matrix1);
    cout << "Test Case 1 Output: " << res1 << " (Expected: 15)" << endl;
    assert(res1 == 15);

    // Test Case 2: 1x1 matrix (edge case)
    vector<vector<int>> matrix2 = {
        {7}
    };
    int res2 = diagonalDifference(matrix2);
    cout << "Test Case 2 Output: " << res2 << " (Expected: 0)" << endl;
    assert(res2 == 0);

    return 0;
}
