#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

/**
 * Compares two rating triplets and computes respective challenge points.
 * Time Complexity: O(1)
 * Space Complexity: O(1)
 */
vector<int> compareTriplets(const vector<int>& a, const vector<int>& b) {
    int aliceScore = 0;
    int bobScore = 0;

    for (size_t i = 0; i < 3; i++) {
        if (a[i] > b[i]) {
            aliceScore++;
        } else if (a[i] < b[i]) {
            bobScore++;
        }
    }

    return {aliceScore, bobScore};
}

int main() {
    // Test Case 1: Standard comparison
    vector<int> a1 = {5, 6, 7};
    vector<int> b1 = {3, 6, 10};
    vector<int> res1 = compareTriplets(a1, b1);
    cout << "Test 1: [" << res1[0] << ", " << res1[1] << "] (Expected: [1, 1])" << endl;
    assert(res1[0] == 1 && res1[1] == 1);

    // Test Case 2: Clean sweep
    vector<int> a2 = {17, 28, 30};
    vector<int> b2 = {99, 16, 8};
    vector<int> res2 = compareTriplets(a2, b2);
    cout << "Test 2: [" << res2[0] << ", " << res2[1] << "] (Expected: [2, 1])" << endl;
    assert(res2[0] == 2 && res2[1] == 1);

    return 0;
}
