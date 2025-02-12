

### 1. Three Sum Problem
**File:** `three_sum.cpp`

#### Problem Statement:
Given an integer array `nums`, return all the unique triplets `[nums[i], nums[j], nums[k]]` such that `i != j != k` and `nums[i] + nums[j] + nums[k] == 0`.

#### Approach:
- Sort the array.
- Iterate through the array with index `i`.
- Use a two-pointer approach (`j` and `k`) to find pairs that sum to `-nums[i]`.
- Skip duplicate elements to ensure unique triplets.
- Time Complexity: **O(n²)**

---
### 2. Special Array Queries
**File:** `special_array_queries.cpp`

#### Problem Statement:
Given an integer array `nums` and a list of queries, determine whether a subarray is *special*, where a special subarray maintains alternating even and odd numbers.

#### Approach:
- Precompute a boolean array marking alternating numbers.
- Use prefix sum to efficiently answer queries.
- Time Complexity: **O(n + q)** where `q` is the number of queries.

---
### 3. Remove Occurrences of a Substring
**File:** `remove_occurrences.cpp`

#### Problem Statement:
Given a string `s` and another string `part`, remove all occurrences of `part` in `s` until no more occurrences exist.

#### Approach:
- Use an iterative approach to find and remove occurrences of `part` in `s`.
- Use `substr` to construct the modified string dynamically.
- Continue until no further removal is possible.
- Time Complexity: **O(n * m)** where `n` is the length of `s` and `m` is the length of `part`.



