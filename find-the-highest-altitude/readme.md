# Find the Highest Altitude

Leetcode [problem 1732](https://leetcode.com/problems/find-the-highest-altitude/); **Difficulty:** `Easy`

## Problem Statement

There is a biker going on a road trip. The road trip consists of `n + 1` points at different altitudes. The biker starts his trip on point `0` with altitude equal `0`.

You are given an integer array `gain` of length `n` where `gain[i]` is the **net gain in altitude** between points `i`​​​​​​ and `i + 1` for all (`0 <= i < n`). Return _the **highest altitude** of a point_.

## Constraints:

- `n == gain.length`
- `1 <= n <= 100`
- `-100 <= gain[i] <= 100`

## Example 1:

**Input:** `gain = [-5,1,5,0,-7]`

**Output:** `1`

**Explanation**:
```
The altitudes are [0,-5,-4,1,1,-6]. The highest is 1.
```

## Example 2:

**Input:** `gain = [-4,-3,-2,-1,4,3,2]`

**Output:** `0`

**Explanation**:
```
The altitudes are [0,-4,-7,-9,-10,-6,-3,-1]. The highest is 0.
```

## Submitted Solution

The implemented [solution](solution.cpp) received the following rating on Leetcode:

![image](https://user-images.githubusercontent.com/33619581/123465154-0ce1f600-d5ee-11eb-863a-e0540885246d.png)
