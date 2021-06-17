# Sqrt(x)

Leetcode [problem 69](https://leetcode.com/problems/sqrtx/); **Difficulty:** `Easy`

# Problem Statement

Given a non-negative integer `x`, compute and return _the square root of_ `x`.

Since the return type is an integer, the decimal digits are **truncated**, and only **the integer part** of the result is returned.

**Note**: You are not allowed to use any built-in exponent function or operator, such as `pow(x, 0.5)` or `x ** 0.5`.

Given an array `nums`. We define a running sum of an array as `runningSum[i] = sum(nums[0]…nums[i])`.

Return the running sum of `nums`.

## Constraints:

- `0 <= x <= 2<sup>31</sup> - 1`

## Example 1:

**Input:** `x = 4`

**Output:** `2`

## Example 2:

**Input:** `x = 8`

**Output:** `2`

**Explanation:**

```
The square root of 8 is 2.82842..., and since the decimal part is truncated, 2 is returned.
```

## Example 3:

**Input:** `nums = [3,1,2,10,1]`

**Output:** `[3,4,6,16,17]`

# Submitted Solution

The implemented [solution](solution.cpp) received the following rating on Leetcode:

![image](https://user-images.githubusercontent.com/33619581/122484678-61291c80-cfd5-11eb-8417-3fecf53bfd43.png)
