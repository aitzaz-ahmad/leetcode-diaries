# Invert Binary Tree

Leetcode [problem 226](https://leetcode.com/problems/invert-binary-tree/) **Difficulty:** `Easy`

## Problem Statement

Given the `root` of a binary tree, invert the tree, and return _its root_.

## Constraints:

- The number of nodes in the tree is in the range `[0, 100]`
- `-100 <= Node.val <= 100`

## Example 1:


![image](https://user-images.githubusercontent.com/33619581/123690427-a6aadc80-d854-11eb-910f-dfefd442f20d.png)

**Input:** `root = [4,2,7,1,3,6,9]`

**Output:** `[4,7,2,9,6,3,1]`

## Example 2:

![image](https://user-images.githubusercontent.com/33619581/123690515-c215e780-d854-11eb-9f5a-759a3b4d487e.png)

**Input:** `root = [2,1,3]`

**Output:** `[2,3,1]`

## Example 3:

**Input:** `root = []`

**Output:** `[]`

## Submitted Solution

The implemented [solution](solution.cpp) received the following rating on Leetcode:

![image](https://user-images.githubusercontent.com/33619581/123690278-7b27f200-d854-11eb-8f30-b3c611d0b7e9.png)
