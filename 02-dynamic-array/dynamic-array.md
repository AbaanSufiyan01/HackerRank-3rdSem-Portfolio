# Dynamic Array

- **Platform:** HackerRank  
- **Category:** Data Structures / Vectors  
- **Key Concept:** 2D nested vector sequence manipulation, bitwise XOR state tracking  

## Problem Description
Initialize a 2D array of $N$ empty sequences. Process $Q$ queries of two types:
1. Append value $y$ to sequence at index $((x \oplus lastAnswer) \pmod N)$.
2. Update $lastAnswer$ to the element at $y \pmod{\text{size}}$ of sequence index $((x \oplus lastAnswer) \pmod N)$, appending $lastAnswer$ to the output array.

## Algorithmic Approach
Maintained an array of dynamically-sized `std::vector<int>` containers. Processed each query in $O(1)$ amortized time by computing the XOR hashed index and appending or indexing directly.

## Asymptotic Complexity
- **Time Complexity:** $O(N + Q)$ where $N$ is vector initialization and $Q$ is query count.
- **Space Complexity:** $O(N + Q)$ for the sequences and query outputs.
