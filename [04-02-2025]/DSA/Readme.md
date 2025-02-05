

## Solution 1: Shortest Distance After Queries

### Problem Description
Given a series of queries modifying an implicit directed path from `0` to `n-1`, determine the shortest path from `0` to `n-1` after each query.

### Approach
- Construct an adjacency list representing a default directed path from `0` to `n-1`.
- Process each query, adding edges dynamically.
- Use **Breadth-First Search (BFS)** to compute the shortest distance from `0` to `n-1`.

### Implementation Details
1. **Graph Representation**:
   - Create an adjacency list `adj` using an unordered map.
   - By default, every `i` connects to `i+1`.
2. **Processing Queries**:
   - Each query adds an extra edge `queries[i][0] -> queries[i][1]`.
   - Perform BFS to find the shortest path from `0` to `n-1`.
   - Reset `vis` (visited array) before each BFS run.
3. **BFS Execution**:
   - Push `0` into the queue.
   - Traverse level by level, marking visited nodes.
   - Return the shortest path length if `n-1` is reached.

### Complexity Analysis
- **Graph Construction**: `O(n)`
- **Query Processing**:
  - BFS is `O(n + E)`, where `E` is the number of edges.
  - Since we reset `vis` and run BFS for each query, the worst case is `O(q * (n + E))`.

---

## Solution 2: Maximum Happiness Sum

### Problem Description
Given an array of happiness values, select `k` elements to maximize their sum while applying a decreasing penalty on subsequent selections.

### Approach
- Sort `happiness` in descending order.
- Select the top `k` elements, applying a penalty of `cnt` where `cnt` starts at `0` and increments after each selection.
- Add the remaining (non-negative) values to the result.

### Implementation Details
1. **Sorting**: Sort `happiness` in decreasing order.
2. **Greedy Selection**:
   - Start with `cnt = 0`.
   - Pick the top `k` elements.
   - Deduct `cnt` from the selected element (only if it remains non-negative).
   - Add the value to `ans`.
3. **Edge Cases**:
   - If the penalty exceeds a value, it is skipped (as negative values do not contribute to happiness).

### Complexity Analysis
- **Sorting**: `O(n log n)`
- **Selection Process**: `O(k)`
- **Overall Complexity**: `O(n log n)`

---

## Solution 3: Check If Two Strings Are Almost Equal

### Problem Description
Given two strings `s1` and `s2` of equal length, determine if they can be made equal by swapping exactly one pair of characters.

### Approach
- Traverse both strings to identify differing characters.
- If there are more than **two** differences, return `false`.
- If exactly **two** differences exist and swapping them makes the strings equal, return `true`.
- Otherwise, return `false`.

### Implementation Details
1. **Tracking Differences**:
   - Traverse `s1` and `s2`.
   - Count mismatched characters.
   - Store the first mismatch as `(a1, b1)`.
   - If a second mismatch occurs, check if swapping makes strings equal.
2. **Edge Cases**:
   - If there are no mismatches, return `true`.
   - If there is only one mismatch, return `false`.

### Complexity Analysis
- **Single Pass Comparison**: `O(n)`
- **Overall Complexity**: `O(n)`

---

## Summary
| Solution | Approach | Complexity |
|----------|------------|-------------|
| Shortest Distance After Queries | BFS on dynamic graph updates | `O(q * (n + E))` |
| Maximum Happiness Sum | Greedy + Sorting | `O(n log n)` |
| Check If Strings Are Almost Equal | Single Pass Comparison | `O(n)` |

These solutions efficiently address their respective problems using BFS, Greedy, and String Manipulation techniques.

