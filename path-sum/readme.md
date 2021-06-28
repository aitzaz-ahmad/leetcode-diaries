# Path Sum

Leetcode [problem 112](https://leetcode.com/problems/path-sum/); **Difficulty:** `Easy`

## Problem Statement

Given the `root` of a binary tree and an integer `targetSum`, return `true` if the tree has a **root-to-leaf** path such that adding up all the values along the path equals `targetSum`.

A **leaf** is a node with no children.

## Constraints:

- The number of nodes in the tree is in the range `[0, 5000]`.
- `-1000 <= Node.val <= 1000`
-  `-1000 <= targetSum <= 1000`

## Example 1:

![image](https://user-images.githubusercontent.com/33619581/123710658-6d339a80-d86f-11eb-907b-f975ddc54d5c.png)

**Input:** `root = [5,4,8,11,null,13,4,7,2,null,null,null,1], targetSum = 22`

**Output:** `true`

## Example 2:

![image](https://user-images.githubusercontent.com/33619581/123710791-9d7b3900-d86f-11eb-972f-520b2b4c70af.png)


**Input:** `root = [1,2,3], targetSum = 5`

**Output:** `false`

## Example 3:

**Input:** `root = [1,2], targetSum = 0`

**Output:** `false`

## Submitted Solution

The implemented [solution](solution.cpp) received the following rating on Leetcode:

![image](https://user-images.githubusercontent.com/33619581/123711457-cea83900-d870-11eb-9c20-16acd694fbe2.png)
