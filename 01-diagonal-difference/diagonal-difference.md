# Diagonal Difference

- **Platform:** HackerRank  
- **Category:** 2D Arrays / Matrices  
- **Key Concept:** Single-pass matrix traversal, primary and secondary diagonal summation  

## Problem Description
Given a square matrix of size $N \times N$, calculate the absolute difference between the sums of its diagonals.

## Algorithmic Approach
Instead of running nested $O(N^2)$ loops, we traverse through a single index $i$ from $0$ to $N - 1$.
- Primary diagonal element: `arr[i][i]`
- Secondary diagonal element: `arr[i][N - 1 - i]`

We accumulate both sums simultaneously in a single loop and return $|primary - secondary|$.

## Asymptotic Complexity
- **Time Complexity:** $O(N)$ linear time with respect to the matrix dimension.
- **Space Complexity:** $O(1)$ constant auxiliary memory.
