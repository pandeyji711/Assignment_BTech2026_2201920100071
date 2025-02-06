## Overview
This document provides explanations for three C++ solutions to different problems involving binary trees and arrays. Each solution is implemented in the `Solution` class.

## 1. Reverse Odd Levels of a Binary Tree
### Problem Description
Given the root of a perfect binary tree, reverse the values at every odd level while keeping the structure unchanged.

### Implementation
- The function `reverseOddLevels(TreeNode* root)` uses a queue to traverse the tree level by level.
- Nodes at odd levels are stored in a vector and reversed.
- The helper function `reverse_odd(vector<TreeNode*>& v)` reverses the values of nodes at a particular level.
- The algorithm uses a BFS approach with a queue to process nodes level by level.

### Time Complexity
- **O(N)**, where `N` is the number of nodes in the tree.

## 2. Tuple Same Product
### Problem Description
Given an array of integers, find the number of unique quadruplets `(a, b, c, d)` such that `a * b = c * d`.

### Implementation
- Uses an unordered map to store product frequencies.
- Iterates through all pairs `(i, j)` to compute their product and store it in the map.
- Counts valid combinations where a product appears at least twice and applies combinatorial calculations.

### Time Complexity
- **O(N^2)**, where `N` is the length of the input array.

## 3. Ways to Split Array
### Problem Description
Given an array, determine the number of ways to split it into two non-empty parts such that the left part's sum is greater than or equal to the right part's sum.

### Implementation
- Computes prefix sums in a `vector<long long>` for efficient range sum calculations.
- Iterates through possible split points and compares sum of left and right parts.
- Increments a counter when the left sum is greater than or equal to the right sum.

### Time Complexity
- **O(N)**, where `N` is the length of the input array.



