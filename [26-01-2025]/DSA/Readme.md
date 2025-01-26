## Problem Statements

### Problem 1: Minimize XOR
- **Problem Statement**:  
  Given two integers `num1` and `num2`, your task is to find an integer `x` such that:
  1. The number of `1` bits in the binary representation of `x` equals the number of `1` bits in `num2`.
  2. The XOR of `num1` and `x` is minimized.  

### Problem 2: Count Valid Partitions
- **Problem Statement**:  
  Given an array `nums`, count the number of ways to partition the array into two subarrays such that the absolute difference between the sums of the subarrays is even.

### Problem 3: Count Mentions
- **Problem Statement**:  
  There are `n` users in a chat system. You are given a list of `events`, where each event is either:
  - A **MESSAGE** mentioning certain users.
  - A user going **OFFLINE** for a fixed duration.  
  Your task is to compute the total mentions for each user, taking into account their online/offline status.

---

## Coding Platforms Used
- These problems were solved in C++ and are inspired by competitive programming challenges typically found on platforms like **LeetCode** and **Codeforces**.

---

## Approach and Solution Explanation

### Problem 1: Minimize XOR
- **Approach**:  
  - Count the number of `1` bits in `num2`.
  - Extract the bits of `num1` and prioritize them using a priority queue.
  - Add the highest-priority bits to the result first to minimize the XOR.
  - If more bits are needed, add the smallest possible bits until the required number of `1` bits is reached.
- **Solution**: Implemented in C++ using bitwise operations and priority queue for efficiency.

---

### Problem 2: Count Valid Partitions
- **Approach**:  
  - Iterate through the array and partition it at every possible index.
  - Calculate the sum of elements in the left and right subarrays for each partition.
  - Check if the absolute difference between these sums is even.
  - Count all valid partitions satisfying the condition.
- **Solution**: Implemented in C++ using nested loops to iterate over possible partitions and compute the sums.

---

### Problem 3: Count Mentions
- **Approach**:  
  - Parse the list of events and process them in chronological order.
  - Maintain the online/offline status of each user and the mentions count.
  - Handle **MESSAGE** events by incrementing the mention count for all mentioned users (if online).
  - Handle **OFFLINE** events by marking the user offline for the specified duration.
  - Use a hashmap to efficiently track offline durations and online statuses.
- **Solution**: Implemented in C++ with a combination of string parsing, hashmaps, and logic to handle chronological events.

---
