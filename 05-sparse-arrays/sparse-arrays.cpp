#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <cassert>
using namespace std;

/**
 * Counts query occurrences in a collection of strings using hash frequency mapping.
 * Time Complexity: O(N + Q)
 * Space Complexity: O(N)
 */
vector<int> matchingStrings(const vector<string>& stringList, const vector<string>& queries) {
    unordered_map<string, int> freqMap;
    for (const auto& str : stringList) {
        freqMap[str]++;
    }

    vector<int> results;
    results.reserve(queries.size());
    for (const auto& q : queries) {
        auto it = freqMap.find(q);
        results.push_back(it != freqMap.end() ? it->second : 0);
    }

    return results;
}

int main() {
    // Test Case 1: Standard query match
    vector<string> strings1 = {"aba", "baba", "aba", "xzxb"};
    vector<string> queries1 = {"aba", "xzxb", "ab"};
    vector<int> res1 = matchingStrings(strings1, queries1);

    cout << "Test 1: ";
    for (int count : res1) cout << count << " ";
    cout << "(Expected: 2 1 0)" << endl;
    assert(res1[0] == 2 && res1[1] == 1 && res1[2] == 0);

    // Test Case 2: Query not found
    vector<string> strings2 = {"def", "de", "fgh"};
    vector<string> queries2 = {"de", "lmn", "fgh"};
    vector<int> res2 = matchingStrings(strings2, queries2);

    cout << "Test 2: ";
    for (int count : res2) cout << count << " ";
    cout << "(Expected: 1 0 1)" << endl;
    assert(res2[0] == 1 && res2[1] == 0 && res2[2] == 1);

    return 0;
}
