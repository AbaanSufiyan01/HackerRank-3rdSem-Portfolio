#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

/**
 * Dynamic Array implementation using nested vectors and bitwise XOR query handling.
 * Time Complexity: O(N + Q)
 * Space Complexity: O(N + Q)
 */
vector<int> dynamicArray(int n, const vector<vector<int>>& queries) {
    vector<vector<int>> arr(n);
    int lastAnswer = 0;
    vector<int> answers;

    for (const auto& q : queries) {
        int type = q[0];
        int x = q[1];
        int y = q[2];
        int idx = (x ^ lastAnswer) % n;

        if (type == 1) {
            arr[idx].push_back(y);
        } else if (type == 2) {
            lastAnswer = arr[idx][y % arr[idx].size()];
            answers.push_back(lastAnswer);
        }
    }

    return answers;
}

int main() {
    // Sample Test Case
    int n = 2;
    vector<vector<int>> queries = {
        {1, 0, 5},
        {1, 1, 7},
        {1, 0, 3},
        {2, 1, 0},
        {2, 1, 1}
    };

    vector<int> result = dynamicArray(n, queries);

    cout << "Query Answers: ";
    for (int ans : result) {
        cout << ans << " ";
    }
    cout << endl; // Expected: 7 3

    assert(result.size() == 2);
    assert(result[0] == 7);
    assert(result[1] == 3);

    return 0;
}
