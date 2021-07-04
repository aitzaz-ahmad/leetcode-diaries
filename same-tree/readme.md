# Same Tree

Leetcode [problem 100](https://leetcode.com/problems/same-tree/); **Difficulty:** `Easy`

## Problem Statement

Given the roots of two binary trees `p` and `q`, write a function to check if they are the same or not.

Two binary trees are considered the same if they are structurally identical, and the nodes have the same value.

## Constraints:

- The number of nodes in the tree is in the range `[1, 100]`.
- <code> -10<sup>4</sup> <= Node.val <= 10<sup>4</sup></code>

## Example 1:

![image](https://user-images.githubusercontent.com/33619581/124384019-cff1bf80-dccf-11eb-834d-b80dba93902a.png)

**Input:** `p = [1,2,3], q = [1,2,3]`

**Output:** `true`

## Example 2:

![image](https://user-images.githubusercontent.com/33619581/124384003-c10b0d00-dccf-11eb-8c12-d0f11553b21e.png)

**Input:** `p = [1,2], q = [1,null,2]`

**Output:** `false`

## Example 3:

![image](https://user-images.githubusercontent.com/33619581/124383995-ab95e300-dccf-11eb-8c16-1d2622981d43.png)

**Input:** `p = [1,2,1], q = [1,1,2]`

**Output:** `false`

## Submitted Solution

Both of the implemented solutions, using [depth first traversal](solution2.cpp) (pre-order) and [breadth first traversal](solution1.cpp), recevied the following rating on Leetcode:

![image](https://user-images.githubusercontent.com/33619581/124383653-e5fe8080-dccd-11eb-8758-55631af8ccbc.png)
