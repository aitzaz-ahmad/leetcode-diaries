# DI String Match

Leetcode [problem 942](https://leetcode.com/problems/di-string-match/); **Difficulty:** `Easy`

## Problem Statement

A permutation `perm` of `n + 1` integers of all the integers in the range `[0, n]` can be represented as a string `s` of length `n` where:

- `s[i] == 'I'` if `perm[i] < perm[i + 1]`, and
- `s[i] == 'D'` if `perm[i] > perm[i + 1]`.

Given a string `s`, reconstruct the permutation `perm` and return it. If there are multiple valid permutations `perm`, return **any of them**.

## Constraints:

- `1 <= s.length <= 100000`
- `s[i]` is either `'I'` or `'D'`.

## Example 1:

**Input:** `s = "IDID"`

**Output:** `[0,4,1,3,2]`

## Example 2:

**Input:** `"III"`

**Output:** `[0,1,2,3]`

## Example 3:

**Input:** `"DDI"`

**Output:** `[3,2,0,1]`

## Submitted Solution

The implemented [solution](solution.cpp) received the following rating on Leetcode:

![image](https://user-images.githubusercontent.com/33619581/122651530-c433c400-d139-11eb-96a6-ebe8a74d33cd.png)
