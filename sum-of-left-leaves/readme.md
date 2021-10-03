# Sum of Left Leaves

Leetcode [problem 404](https://leetcode.com/problems/sum-of-left-leaves/); **Difficulty:** `Easy`

## Problem Statement

Given the `root` of a binary tree, return the sum of all left leaves.

## Constraints:

- The number of nodes in the tree is in the range `[1, 1000]`.
- `-1000 <= Node.val <= 1000`

## Example 1:

![image](https://user-images.githubusercontent.com/33619581/126869602-cc99597c-157b-4857-8fce-098879650de9.png)

**Input:** `root = [3,9,20,null,null,15,7]`

**Output:** `24`

**Explanation:**
```
There are two left leaves in the binary tree, with values 9 and 15 respectively.
```

## Example 2:

**Input:** `root = [1]`

**Output:** `0`

## Submitted Solution

The implemented [solution](solution.cpp) received the following rating on Leetcode:

![image](https://user-images.githubusercontent.com/33619581/126869621-dbb62a11-9b05-4108-bbe7-a51bbeb8589c.png)
