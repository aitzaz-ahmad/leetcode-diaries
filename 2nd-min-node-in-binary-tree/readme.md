# Second Minimum Node In a Binary Tree

Leetcode [problem 671](https://leetcode.com/problems/second-minimum-node-in-a-binary-tree/); **Difficulty:** `Easy`

## Problem Statement

Given a non-empty special binary tree consisting of nodes with the non-negative value, where each node in this tree has exactly `two` or `zero` sub-node. If the node has two sub-nodes, then this node's value is the smaller value among its two sub-nodes. More formally, the property `root.val = min(root.left.val, root.right.val`) always holds.

Given such a binary tree, you need to output the **second minimum** value in the set made of all the nodes' value in the whole tree.

If no such second minimum value exists, output -1 instead.

## Constraints:

- The number of nodes in the tree is in the range `[1, 25]`.
- `root.val == min(root.left.val, root.right.val)` for each internal node of the tree.
- <code> 1 <= Node.val <= 2<sup>31</sup> - 1</code>

## Example 1:

![image](https://user-images.githubusercontent.com/33619581/123705420-36598680-d867-11eb-91c4-9579553c3524.png)


**Input:** `root = [2,2,5,null,null,5,7]`

**Output:** `5`

**Explanation:**
```
The smallest value is 2, the second smallest value is 5.
```

## Example 2:

![image](https://user-images.githubusercontent.com/33619581/123705354-22158980-d867-11eb-94bb-a8a16c9aee0c.png)


**Input:** `root = [2,2,2]`

**Output:** `-1`

**Explanation:**
```
The smallest value is 2, but there isn't any second smallest value.
```

## Submitted Solution

The implemented [solution](solution.cpp) received the following rating on Leetcode:

![image](https://user-images.githubusercontent.com/33619581/123703831-38224a80-d865-11eb-82b7-d10f8be69970.png)
