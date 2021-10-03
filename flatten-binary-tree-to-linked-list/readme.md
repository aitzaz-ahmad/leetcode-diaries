# Flatten Binary Tree to Linked List

Leetcode [problem 114](https://leetcode.com/problems/flatten-binary-tree-to-linked-list/); **Difficulty:** `Medium`

## Problem Statement

Given the `root` of a binary tree, flatten the tree into a "linked list":

 - The "linked list" should use the same `TreeNode` class where the right child pointer points to the next node in the list and the left child pointer is always `null`.
 - The "linked list" should be in the same order as a **pre-order traversal** of the binary tree.

## Constraints:

- The number of nodes in the tree is in the range `[1, 2000]`.
- `-100 <= Node.val <= 100`

## Example 1:

![image](https://user-images.githubusercontent.com/33619581/127748064-b59abc80-9c5f-47d0-aa89-93048cd7f2ef.png)

**Input:** `root = [1,2,5,3,4,null,6]`

**Output:** `[1,null,2,null,3,null,4,null,5,null,6]`

**Explanation:**
```
There are two left leaves in the binary tree, with values 9 and 15 respectively.
```

## Example 2:

**Input:** `root = []`

**Output:** `[]`

## Example 3:

**Input:** `root = [0]`

**Output:** `[0]`

## Follow up

Can you flatten the tree in-place (with `O(1)` extra space)?
_(To be implemented)_

## Submitted Solution

The implemented [solution](solution.cpp) received the following rating on Leetcode:

![image](https://user-images.githubusercontent.com/33619581/127748040-21bc0228-5fb5-49b4-b8bb-f8c7677c7bca.png)
