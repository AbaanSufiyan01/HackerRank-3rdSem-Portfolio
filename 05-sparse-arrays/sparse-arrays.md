# Sparse Arrays

- **Platform:** HackerRank  
- **Category:** Hash Maps / Strings  
- **Key Concept:** Frequency mapping, string lookup optimization ($O(N \cdot Q)$ vs $O(N + Q)$)  

## Problem Description
Given a collection of $N$ input strings and a list of $Q$ query strings, determine how many times each query string occurs in the input collection.

## Algorithmic Approach
A naive brute-force nested search compares all queries against all strings in $O(N \cdot Q)$ time.  
To optimize, pre-processed the input strings into an `std::unordered_map<string, int>` hash table in $O(N)$ time. Then each of the $Q$ queries is answered with an $O(1)$ average-case lookup, reducing overall complexity to $O(N + Q)$.

## Asymptotic Complexity
- **Time Complexity:** $O((N + Q) \cdot L)$ where $L$ is max string length.
- **Space Complexity:** $O(N \cdot L)$ to store distinct strings in the hash map.
