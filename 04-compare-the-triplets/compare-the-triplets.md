# Compare the Triplets

- **Platform:** HackerRank  
- **Category:** Basic Implementation  
- **Key Concept:** Element-wise parallel comparison and score tracking  

## Problem Description
Alice and Bob each created one problem for HackerRank. A reviewer rates the two challenges awarded scale points across three categories (clarity, originality, difficulty). Compare $a[i]$ with $b[i]$ for $i \in \{0, 1, 2\}$ and assign 1 point to whoever has the higher score. If tied, nobody receives points.

## Algorithmic Approach
Ran a constant 3-iteration comparison loop checking $a[i] > b[i]$ and $a[i] < b[i]$, incrementing the corresponding winner's counter.

## Asymptotic Complexity
- **Time Complexity:** $O(1)$ constant time (exactly 3 comparisons).
- **Space Complexity:** $O(1)$ constant auxiliary memory.
