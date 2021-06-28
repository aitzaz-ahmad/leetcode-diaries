# Search in a Binary Search Tree

Leetcode [problem 700](https://leetcode.com/problems/search-in-a-binary-search-tree/); **Difficulty:** `Easy`

## Problem Statement

You are given the `root` of a binary search tree (BST) and an integer `val`.

Find the node in the BST that the node's value equals `val` and return the subtree rooted with that node. If such a node does not exist, return `null`.

## Constraints:

- The number of nodes in the tree is in the range `[1, 5000]`.
- <code> 1 <= Node.val <= 10<sup>7</sup></code>
- `root` is a binary search tree.
- <code> 1 <= val <= 10<sup>7</sup></code>

## Example 1:

![image](https://user-images.githubusercontent.com/33619581/123706725-ec71a000-d868-11eb-8a7e-1234f08eb7f6.png)

**Input:** `root = [4,2,7,1,3], val = 2`

**Output:** `[2,1,3]`

## Example 2:

![image](https://user-images.githubusercontent.com/33619581/123706814-0f03b900-d869-11eb-861f-d45b34bdffed.png)

**Input:** `root = [4,2,7,1,3], val = 5`

**Output:** `[]`

## Submitted Solution

The implemented [solution](solution.cpp) received the following rating on Leetcode:

![image](https://user-images.githubusercontent.com/33619581/123706580-bc2a0180-d868-11eb-8fbd-98e9473a1bba.png)
