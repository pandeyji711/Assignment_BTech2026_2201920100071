# Problem Statements

## Problem 1: Finding the Redundant Connection in a Graph
- **Problem Statement**:  
  Given an undirected graph with `n` nodes and `n` edges (forming a tree structure with an additional edge), determine which edge, when removed, results in a tree. The solution should return the edge that can be removed to eliminate cycles while keeping the graph connected.

## Problem 2: Remove Nodes from a Linked List
- **Problem Statement**:  
  Given a singly linked list, remove all nodes such that no node has a value smaller than any node appearing after it in the list. The output should be a modified linked list following this condition.

## Problem 3: XOR Operation on Two Arrays
- **Problem Statement**:  
  Given two integer arrays, `nums1` and `nums2`, perform XOR operations on their elements based on specific conditions. Each element contributes to the final XOR result depending on how many times it appears across both arrays.

---

# Solutions and Approach

## Problem 1: Finding the Redundant Connection in a Graph
- **Approach**:  
  1. **Graph Representation:** Construct an adjacency list representation of the graph.  
  2. **Cycle Detection Using BFS:**  
     - Traverse through all edges, removing one edge at a time.  
     - Use BFS to check if all nodes remain connected.  
  3. **Validation:** If removing an edge still allows a fully connected graph, that edge is redundant.  
  4. **Return Result:** Identify the last edge in the input order that meets this criterion and return it.  

---

## Problem 2: Remove Nodes from a Linked List
- **Approach**:  
  1. Extract values from the linked list into an array.  
  2. Traverse the array from the end to maintain only the largest values.  
  3. Rebuild the linked list using only the retained values.  
  4. Ensure the correct linking of nodes and handle memory efficiently.  

---

## Problem 3: XOR Operation on Two Arrays
- **Approach**:  
  1. Maintain a frequency map for all elements from both arrays.  
  2. Track elements appearing an odd number of times.  
  3. Compute the XOR result from relevant elements.  