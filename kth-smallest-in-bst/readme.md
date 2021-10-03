# Kth Smallest Element in a BST

Leetcode [problem 230](https://leetcode.com/problems/kth-smallest-element-in-a-bst/); **Difficulty:** `Medium`

## Problem Statement

Given the `root` of a binary search tree, and an integer `k`, return the <code>k<sup>th</sup></code> **(1-indexed)** _smallest element in the tree_.

## Constraints:

- The number of nodes in the tree is `n`.
- <code> 1 <= k <= n <= 10<sup>4</sup> </code>
- <code> 0 <= Node.val <= 10<sup>4</sup> </code>


## Example 1:

![image](https://user-images.githubusercontent.com/33619581/126869042-4b99e107-790d-4eb1-a6b7-194ef0fdda52.png)

**Input:** `root = [3,1,4,null,2], k = 1`

**Output:** `1`

## Example 2:

![image](https://user-images.githubusercontent.com/33619581/126869029-d16e8723-2c77-469a-b480-1458f89bfd72.png)

**Input:** `root = [5,3,6,2,4,null,null,1], k = 3`

**Output:** `3`

## Follow up:

If the BST is modified often (i.e., we can do insert and delete operations) and you need to find the kth smallest frequently, how would you optimize? (_To be implemented_)

## Submitted Solution

The implemented [solution](solution.cpp) recevied the following rating on Leetcode:

![image](https://user-images.githubusercontent.com/33619581/126868966-7f807039-db53-4958-adbb-3a3d1449165f.png)
