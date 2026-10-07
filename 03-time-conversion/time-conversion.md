# Time Conversion

- **Platform:** HackerRank  
- **Category:** Strings & Logic  
- **Key Concept:** 12-hour AM/PM to 24-hour military time formatting  

## Problem Description
Given a time in 12-hour AM/PM format, convert it to military (24-hour) time format (`hh:mm:ss`).

## Algorithmic Approach
Parsed the 2-digit hour prefix and 2-character period suffix (`AM` or `PM`).
- For `12:xx:xxAM`, set hour to `00`.
- For `12:xx:xxPM`, keep hour as `12`.
- For other `PM` hours, add 12 to the hour.
- Formatted the output using two-digit zero padding with `std::ostringstream`.

## Asymptotic Complexity
- **Time Complexity:** $O(1)$ constant time string manipulation.
- **Space Complexity:** $O(1)$ constant space.
