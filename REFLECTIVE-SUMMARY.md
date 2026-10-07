# Activity 8: Algorithmic Optimization & Reflection Summary

**Course:** Portfolio Building (B25CS0311)  
**Student:** Abaan Sufiyan  
**Semester:** 3rd Semester B.Tech (Computer Science & Engineering), REVA University  

---

### Reflective Summary: Algorithmic Optimization Techniques in Studio Practice
During the execution of Activity 8, algorithmic efficiency was evaluated both theoretically and empirically across linear and non-linear data structures. A primary focus was shifting from brute-force iterations to optimal time-space bounds.

In "Diagonal Difference," using a single loop with dual index evaluation (`arr[i][i]` and `arr[i][n-1-i]`) reduced matrix traversal from $O(N^2)$ to linear $O(N)$ runtime with zero auxiliary space overhead ($O(1)$ space). In "Sparse Arrays," replacing an $O(N \cdot Q)$ nested comparison loop with an `std::unordered_map` hash table achieved an average $O(N + Q)$ complexity, showcasing how trade-offs in auxiliary memory space directly optimize processing throughput for large-scale query sets.

Similarly, implementing "Dynamic Array" provided practical mastery over dynamic resizing and bitwise XOR query handling, mirroring the internal memory management of dynamic vectors in production software.

Solving these challenges on HackerRank reinforced the significance of identifying constraints before writing code. Writing local test cases with edge conditions (e.g., boundary values, single elements, and duplicate frequencies) prior to final platform submission ensured zero-defect deployments and deepened my understanding of optimal asymptotic performance.
