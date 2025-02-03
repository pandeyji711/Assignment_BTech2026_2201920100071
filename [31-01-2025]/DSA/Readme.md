
## Problem Statements & Approaches

### 1. Pattern Matching with Wildcards (`hasMatch`)

#### Problem Statement
Given two strings `s` and `p`, where `p` may contain a `'*'` wildcard, determine whether `s` matches the pattern described by `p`. The `'*'` wildcard allows for any number of characters between fixed substrings.

#### Approach
- Extract the prefix (before `'*'`) and suffix (after `'*'`) from `p`.
- Search for the prefix in `s` and, if found, check if the suffix appears later in the string.
- If both conditions are met, return `true`; otherwise, return `false`.
- Uses substring search and reverse operations for efficient pattern matching.

---

### 2. Maximum Adjacent Distance (`maxAdjacentDistance`)

#### Problem Statement
Given a circular array of integers, find the maximum absolute difference between two adjacent elements.

#### Approach
- Iterate through the circular array and compute the absolute difference between each adjacent pair.
- Use modulo indexing to wrap around at the end of the array.
- Track the maximum absolute difference encountered.
- This ensures an O(N) time complexity for efficient computation.

---

### 3. Minimum Cost Transformation (`minCost`)

#### Problem Statement
Given two integer arrays `arr` and `brr`, find the minimum cost required to transform `arr` into `brr`, where each transformation operation has a cost defined by `k`.

#### Approach
- Compute the absolute differences between corresponding elements of `arr` and `brr`.
- Sort both arrays and check if a direct transformation is possible while minimizing cost.
- Consider both direct swaps and additional cost `k` to determine the optimal transformation.
- Use sorting and greedy techniques to optimize the solution.

---
