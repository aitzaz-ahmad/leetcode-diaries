# Range Sum of BST

Leetcode [problem 938](https://leetcode.com/problems/range-sum-of-bst/); **Difficulty:** `Easy`

## Problem Statement

Given the `root` of a binary search treeand two integers `low` and `high`, return _the sum of values of all nodes with a value in the **inclusive** range_ `[low, high]`.

## Constraints:

- The number of nodes in the tree is in the range <code>[1, 2 * 10<sup>4</sup>]</code>.
- <code> 1 <= Node.val <= 10<sup>5</sup></code>
- <code> 1 <= low <= high <= 10<sup>5</sup> </code>
- All `Node.val` are **unique**.

## Example 1:

![image](https://user-images.githubusercontent.com/33619581/127748408-c357fcbb-9747-4166-8569-620326d3f0b0.png)

**Input:** `root = [10,5,15,3,7,null,18], low = 7, high = 15`

**Output:** `32`

**Explanation:**
```
Nodes 7, 10, and 15 are in the range [7, 15]. 7 + 10 + 15 = 32.
```

## Example 2:

![image](https://user-images.githubusercontent.com/33619581/127748420-162259e9-de0c-4874-8789-73f2148fd31e.png)

**Input:** `root = [10,5,15,3,7,13,18,1,null,6], low = 6, high = 10`

**Output:** `23`

**Explanation:**
```
Nodes 6, 7, and 10 are in the range [6, 10]. 6 + 7 + 10 = 23.
```

## Submitted Solution

The implemented [solution](solution.cpp) received the following rating on Leetcode:

![image](https://user-images.githubusercontent.com/33619581/127748376-dec0fa3a-9da2-4f70-bc86-ea275a03c8fd.png)
