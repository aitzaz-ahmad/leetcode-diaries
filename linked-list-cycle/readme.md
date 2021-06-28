# Linked List Cycle

Leetcode [problem 141](https://leetcode.com/problems/linked-list-cycle/); **Difficulty:** `Easy`

## Problem Statement

Given `head`, the head of a linked list, determine if the linked list has a cycle in it.

There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the `next` pointer. Internally, `pos` is used to denote the index of the node that tail's `next` pointer is connected to. **Note that `pos` is not passed as a parameter**.

Return `true` _if there is a cycle in the linked list_. Otherwise, return `false`.

## Constraints:

- The number of the nodes in the list is in the range <code>[0, 10<sup>4</sup>]</code>.
- <code> -10<sup>5</sup> <= Node.val <= 10<sup>5</sup></code>

## Example 1:

![image](https://user-images.githubusercontent.com/33619581/123709724-d4e8e600-d86d-11eb-9bb2-ac25584b3c47.png)

**Input:** `head = [3,2,0,-4], pos = 1`

**Output:** `true`

**Explanation:**
```
There is a cycle in the linked list, where the tail connects to the 1st node (0-indexed).
```

## Example 2:

![image](https://user-images.githubusercontent.com/33619581/123709770-e8944c80-d86d-11eb-9fb1-65f11dde55ef.png)

**Input:** `head = [1,2], pos = 0`

**Output:** `true`

**Explanation:**
```
There is a cycle in the linked list, where the tail connects to the 0th node.
```

## Example 3:

![image](https://user-images.githubusercontent.com/33619581/123709827-fcd84980-d86d-11eb-9f05-22503dbe6a32.png)

**Input:** `head = [1], pos = -1`

**Output:** `false`

**Explanation:**
```
There is no cycle in the linked list.
```

## Follow up:

Can you solve it using `O(1)` (i.e. constant) memory?

## Submitted Solution

The implemented [solution](solution.cpp) solves the problem using `O(1)` memory and received the following rating on Leetcode:

![image](https://user-images.githubusercontent.com/33619581/123709950-26917080-d86e-11eb-9745-6c74924e4e06.png)
