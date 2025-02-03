# README

## Problem 1: Maximum Sum of Two Non-Overlapping Events

### Problem Statement
You are given a list of events, where each event has a start time, end time, and value. You can attend at most two non-overlapping events. Return the maximum sum of values you can obtain by selecting up to two events.

### Approach
- This problem is solved using **Dynamic Programming and Binary Search**.
- Sort the events by start time to ensure a sequential selection.
- Use **binary search (lower_bound)** to efficiently find the next non-overlapping event.
- Define a DP table `dp[i][j]`, where `i` represents the current event index and `j` represents the number of selected events.
- Use a **bottom-up DP approach** to fill the table.
- Return the maximum sum that can be obtained by selecting up to two events.

---

## Problem 2: Count Words With a Given Prefix

### Problem Statement
Given an array of words and a string `pref`, return the number of words that start with `pref`.

### Approach
- Iterate over the list of words.
- For each word, check if the first `n` characters match `pref` using `substr()`.
- Increment the count for each match.
- Return the final count.

---

## Problem 3: Lexicographically Largest Repeat Limited String

### Problem Statement
Given a string `s` consisting of lowercase letters and an integer `repeatLimit`, construct the **lexicographically largest** string that can be formed under the condition that no character appears more than `repeatLimit` times consecutively.

### Approach
- Use a **frequency map** to count occurrences of each character.
- Sort characters in descending order to construct the largest possible string.
- Use a helper function `construct()` to append characters while adhering to the repeat limit.
- If a character exceeds the repeat limit, insert a lower-priority character in between to break consecutive repetitions.
- Continue until all valid characters are placed.
- Return the final constructed string.

---

### Author
**Anurag Pandey**