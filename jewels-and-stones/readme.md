# Jewels and Stones

Leetcode [problem 771](https://leetcode.com/problems/jewels-and-stones/); **Difficulty:** `Easy`

## Problem Statement

You're given strings `jewels` representing the types of stones that are jewels, and `stones` representing the stones you have. Each character in `stones` is a type of stone you have. You want to know how many of the stones you have are also jewels.

Letters are case sensitive, so `"a"` is considered a different type of stone from `"A"`.

## Constraints:

- `1 <= jewels.length, stones.length <= 50`
- `jewels` and `stones` consist of only English letters.
- All the characters of `jewels` are **unique**. 

## Example 1:

**Input:** `jewels = "aA", stones = "aAAbbbb"`

**Output:** `3`

## Example 2:

**Input:** `jewels = "z", stones = "ZZ"`

**Output:** `0`

## Submitted Solution

The implemented [solution](solution.cpp) received the following rating on Leetcode:

![image](https://user-images.githubusercontent.com/33619581/123463484-ddca8500-d5eb-11eb-8766-424813ef08cb.png)
