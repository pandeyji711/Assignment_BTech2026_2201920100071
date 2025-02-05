

## Solution 1: Find the Prefix Common Array

### Problem Description
Given two arrays `A` and `B`, return an array where each element at index `i` represents the number of common elements in the prefix subarrays `A[0:i]` and `B[0:i]`.

### Approach
- Use a `vis` array of size `51` to track occurrences of numbers.
- Iterate through each index `i`, counting common elements between `A[0:i]` and `B[0:i]`.
- Store the count in the answer array.

### Complexity Analysis
- **Outer Loop**: `O(n)`
- **Inner Loops**: `O(n^2)` in worst case
- **Overall Complexity**: `O(n^2)`

---

## Solution 2: First Complete Index

### Problem Description
Given an array `arr` and a matrix `mat`, determine the first index at which either a row or a column in `mat` is completely filled.

### Approach
1. **Mapping Matrix Elements**:
   - Use a hashmap to store the position of each element in `mat`.
2. **Tracking Row and Column Counts**:
   - Maintain two hashmaps to count occurrences in rows and columns.
3. **Processing `arr`**:
   - As we iterate through `arr`, update row and column counts.
   - If any row or column reaches its size, return the index immediately.

### Complexity Analysis
- **Preprocessing Matrix**: `O(m * n)`
- **Processing Array**: `O(n)`
- **Overall Complexity**: `O(m * n) + O(n) ≈ O(m * n)`

---

## Solution 3: Maximum Ascending Sum

### Problem Description
Find the maximum sum of a strictly increasing subarray in `nums`.

### Approach
- Use two pointers (`l` and `r`) to traverse the array.
- Maintain a running sum `temp` and update the maximum sum encountered.
- If `nums[r]` is smaller than or equal to `nums[r-1]`, reset `temp`.

### Complexity Analysis
- **Single Pass Traversal**: `O(n)`
- **Overall Complexity**: `O(n)`

---

## Summary
| Solution | Approach | Complexity |
|----------|------------|-------------|
| Find the Prefix Common Array | Brute Force Counting | `O(n^2)` |
| First Complete Index | Hashmaps for Row & Column Tracking | `O(m * n)` |
| Maximum Ascending Sum | Two Pointer Technique | `O(n)` |

These solutions effectively use brute-force counting, hashmaps, and two-pointer techniques for efficient problem-solving.

