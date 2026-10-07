#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <cassert>
using namespace std;

/**
 * Converts 12-hour AM/PM time format to 24-hour military time.
 * Time Complexity: O(1)
 * Space Complexity: O(1)
 */
string timeConversion(string s) {
    int hour = stoi(s.substr(0, 2));
    string minuteSecond = s.substr(2, 6);
    string period = s.substr(8, 2);

    if (period == "AM") {
        if (hour == 12) hour = 0;
    } else { // PM
        if (hour != 12) hour += 12;
    }

    ostringstream oss;
    oss << setw(2) << setfill('0') << hour << minuteSecond;
    return oss.str();
}

int main() {
    // Test Case 1: PM conversion
    string s1 = "07:05:45PM";
    string res1 = timeConversion(s1);
    cout << "Test 1: " << s1 << " -> " << res1 << " (Expected: 19:05:45)" << endl;
    assert(res1 == "19:05:45");

    // Test Case 2: Midnight AM conversion
    string s2 = "12:01:00AM";
    string res2 = timeConversion(s2);
    cout << "Test 2: " << s2 << " -> " << res2 << " (Expected: 00:01:00)" << endl;
    assert(res2 == "00:01:00");

    // Test Case 3: Noon PM conversion
    string s3 = "12:40:22PM";
    string res3 = timeConversion(s3);
    cout << "Test 3: " << s3 << " -> " << res3 << " (Expected: 12:40:22)" << endl;
    assert(res3 == "12:40:22");

    return 0;
}
