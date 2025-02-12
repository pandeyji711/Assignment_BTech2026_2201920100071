

## 1. Group Anagrams

### Problem Statement
Given an array of strings, group the anagrams together.

### Approach
- Sort each string in the array and use it as a key in an unordered map.
- Store the original strings as values in a vector corresponding to the sorted key.
- Traverse the map and collect all grouped anagrams.

---

## 2. Valid Sudoku

### Problem Statement
Determine if a given 9x9 Sudoku board is valid. The board may be partially filled, but must follow the Sudoku rules:
- Each row contains unique numbers (1-9) without repetition.
- Each column contains unique numbers (1-9) without repetition.
- Each of the 3x3 sub-boxes contains unique numbers (1-9) without repetition.

### Approach
- Use hash maps to check for duplicate numbers in rows, columns, and 3x3 sub-boxes.
- Iterate through the board and update hash maps while checking for rule violations.
- Return `true` if all constraints are satisfied, otherwise return `false`.

---

## 3. Maximum Sum of Two Numbers with Equal Digit Sum

### Problem Statement
Find the maximum sum of any two numbers in an array where the sum of their digits is equal.

### Approach
- Use an unordered map to store numbers based on their digit sum.
- Iterate through the array, compute the sum of digits for each number, and store it in the map.
- Extract the two largest numbers for each digit sum and compute their sum.
- Return the maximum sum found.

---



