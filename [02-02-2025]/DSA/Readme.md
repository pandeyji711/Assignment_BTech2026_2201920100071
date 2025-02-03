

## Problem 1: Target Sum

### Problem Statement
Given an array of integers `nums` and an integer `target`, return the number of ways to assign `+` and `-` signs to elements in `nums` such that their sum equals `target`.

### Approach
- This problem is solved using **recursion with memoization (Dynamic Programming)**.
- Define a recursive function `solve(nums, target, sum, ind, dp)` that explores all possibilities of adding or subtracting the current element.
- Use a **2D DP table**, `dp[sum+1000][ind]`, where `sum` is shifted by 1000 to handle negative sums.
- The base case is when we have processed all elements (`ind == nums.size()`). If `sum == target`, return 1; otherwise, return 0.
- The recursive step calculates the number of ways by including `+nums[ind]` and `-nums[ind]`.
- The final answer is obtained by calling `solve(nums, target, 0, 0, dp)`.

---

## Problem 2: Edit Distance

### Problem Statement
Given two strings `word1` and `word2`, return the minimum number of operations required to convert `word1` to `word2`. The allowed operations are:
- Insert a character
- Delete a character
- Replace a character

### Approach
- Solve using **recursion with memoization (Dynamic Programming)**.
- Define a recursive function `solve(word1, word2, ind1, ind2, dp)`, which finds the minimum operations needed to transform `word1[ind1:]` into `word2[ind2:]`.
- Base cases:
  - If `ind1 == word1.length()`, return the remaining length of `word2`.
  - If `ind2 == word2.length()`, return the remaining length of `word1`.
- If characters match, move to the next character in both strings.
- Otherwise, consider three operations:
  - **Insert**: Move `ind2` forward and increase cost.
  - **Delete**: Move `ind1` forward and increase cost.
  - **Replace**: Move both `ind1` and `ind2` forward and increase cost.
- Use **memoization** (`dp[ind1][ind2]`) to store results and avoid recomputation.

---

## Problem 3: Boats to Save People

### Problem Statement
Given an array `people` where `people[i]` represents the weight of each person and an integer `limit`, return the minimum number of boats required. Each boat can carry at most two people, provided their combined weight does not exceed `limit`.

### Approach
- Solve using **Greedy Two-Pointer** approach:
- **Sort** the `people` array.
- Use two pointers:
  - `l = 0` (lightest person)
  - `r = people.size() - 1` (heaviest person)
- If the heaviest person (`people[r]`) can pair with the lightest (`people[l]`), put them together in a boat.
- Otherwise, send the heaviest person alone.
- Continue moving the pointers and increment the boat count.

---
