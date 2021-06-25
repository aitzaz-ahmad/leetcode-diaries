# Shuffle the Array

Leetcode [problem 1470](https://leetcode.com/problems/shuffle-the-array/); **Difficulty:** `Easy`

## Problem Statement

Given the array `nums` consisting of `2n` elements in the form <code>[x<sub>1</sub>,x<sub>2</sub>,...,x<sub>n</sub>,y<sub>1</sub>,y<sub>2</sub>,...,y<sub>n</sub>]</code>.

_Return the array in the form_ <code>[x<sub>1</sub>,y<sub>1</sub>,x<sub>2</sub>,y<sub>2</sub>,...,x<sub>n</sub>,y<sub>n</sub>]</code>.

## Constraints:

- `1 <= n <= 500`
- `nums.length == 2n`
- <code> 1 <= nums.length <= 10<sup>3</sup> </code>

## Example 1:

**Input:** `nums = [2,5,1,3,4,7], n = 3`

**Output:** `[2,3,5,4,1,7]`

**Explanation:**
```
Since x1=2, x2=5, x3=1, y1=3, y2=4, y3=7 then the answer is [2,3,5,4,1,7].
```

## Example 2:

**Input:** `nums = [1,2,3,4,4,3,2,1], n = 4`

**Output:** `[1,4,2,3,3,2,4,1]`

## Example 3:

**Input:** `nums = [1,1,2,2], n = 2`

**Output:** `[1,2,1,2]`

## Submitted Solution

The implemented [solution](solution.cpp) received the following rating on Leetcode:

![image](https://user-images.githubusercontent.com/33619581/123459413-8c6bc700-d5e6-11eb-912d-53f3461dde59.png)
