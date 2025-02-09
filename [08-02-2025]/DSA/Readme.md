## Solution 1: Checking Valid Cuts in Rectangles

### Problem Statement:
Given a set of rectangles represented as `rectangles[i] = [x1, y1, x2, y2]`, determine whether it is possible to make at least two valid cuts along either the vertical or horizontal axis that separate the rectangles.

### Approach:
1. Extract vertical and horizontal edge coordinates of rectangles into separate vectors.
2. Sort both vectors based on their starting positions.
3. Use a queue to track the active intervals:
   - Iterate through sorted intervals and maintain active ranges.
   - If there are two or more disjoint active ranges at any point, return `true`.
4. Repeat the process for both vertical and horizontal edges.
5. If no valid cuts are found, return `false`.

### Complexity:
- Sorting takes **O(N log N)**.
- Iterating through the sorted intervals is **O(N)**.
- Overall, the complexity is **O(N log N)**.

---

## Solution 2: Counting Bad Pairs

### Problem Statement:
Given an array `nums`, a pair `(i, j)` is a **bad pair** if `i < j` and `nums[j] - nums[i] != j - i`. Find the total number of bad pairs.

### Approach:
1. Instead of directly counting bad pairs, count **good pairs** where `nums[j] - j == nums[i] - i`.
2. Use a hashmap `m` to store frequency of `(nums[i] - i)` values.
3. For each index `i`, check if the value exists in `m`:
   - If yes, increment the good pair count by `m[nums[i] - i]`.
   - Update the frequency of `nums[i] - i` in `m`.
4. Compute the total pairs as `n * (n - 1) / 2`.
5. Subtract the good pairs from total pairs to get the bad pairs.

### Complexity:
- Iterating through `nums` is **O(N)**.
- Hashmap operations are **O(1)**.
- Overall, the complexity is **O(N)**.

---

## Solution 3: Minimum Operations to Make Array Unique in Subsequences

### Problem Statement:
Given an array `nums`, determine the minimum operations needed to ensure that each contiguous subsequence of length 3 has unique elements.

### Approach:
1. Define a helper function `cheak(ind, nums)` to check if all elements from index `ind*3` onward are unique.
2. If the size of `nums` is less than 3:
   - Directly check uniqueness using `cheak(0, nums)`.
   - Return `0` if unique, otherwise `1`.
3. Iterate through the array while checking validity:
   - If the sequence is already valid, return `ans`.
   - Otherwise, increment `ans` and move forward.
4. Return `ans` as the minimum number of operations required.

### Complexity:
- The check function runs in **O(N)**.
- The main loop runs **O(N)** times in the worst case.
- Overall complexity is **O(N^2)** in the worst case.

---

## Summary
- **Solution 1**: Uses sorting and queues to find disjoint intervals (**O(N log N)**).
- **Solution 2**: Uses a hashmap to count good pairs and derive bad pairs (**O(N)**).
- **Solution 3**: Uses brute force checking for uniqueness in sequences (**O(N^2)** in the worst case).