

## Solution 1: Count Prefix-Suffix Pairs

### Problem Statement:
Given a list of words, count the number of prefix-suffix pairs such that one word appears as both the prefix and suffix of another word.

### Approach:
1. Define a helper function `solve(str1, str2)` to check if `str2` is both a prefix and suffix of `str1`.
2. Iterate through the words array:
   - Compare each word with every other longer word in the list.
   - Use `solve` to verify prefix and suffix conditions.
   - Increment count if valid pairs are found.
3. Return the total count of valid pairs.

### Complexity:
- **O(N^2 * M)** in the worst case, where `N` is the number of words and `M` is the maximum word length.

---

## Solution 2: Number Containers System

### Problem Statement:
Design a system where each index holds a number, and it supports operations to change a number and find the smallest index holding a given number.

### Approach:
1. Use two hash maps:
   - `m` to map indices to numbers.
   - `mq` to map numbers to a min-heap of indices.
2. `change(index, number)`:
   - Update `m`.
   - Push the index into the heap corresponding to `number`.
3. `find(number)`:
   - Retrieve the smallest index from `mq[number]`.
   - Ensure the index is still valid using `m` before returning.
   - If no valid index exists, return `-1`.

### Complexity:
- **O(log N)** for `change()` (heap insertion).
- **O(log N)** for `find()` (heap pop operations).

---

## Solution 3: First Complete Index in a Matrix

### Problem Statement:
Given a matrix and an array of numbers representing the order of elements being marked, determine the first index where either an entire row or an entire column is marked completely.

### Approach:
1. Store the positions of numbers in a hash map `m_ind`.
2. Use two additional hash maps `rowm` and `colm` to track marked counts.
3. Iterate over `arr`:
   - Update row and column counts for each marked number.
   - If any row or column reaches its size, return the index.
4. If no such row or column is found, return `0`.

### Complexity:
- **O(N + M)**, where `N` is the number of elements in `arr` and `M` is the total number of cells in the matrix.

---

## Summary
- **Solution 1**: Checks prefix-suffix conditions in a nested loop (**O(N^2 * M)**).
- **Solution 2**: Uses hash maps and heaps for efficient retrieval and modification (**O(log N)** per operation).
- **Solution 3**: Uses hash maps for quick lookup and update operations (**O(N + M)**).

