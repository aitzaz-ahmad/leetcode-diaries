# Is Subsequence

Leetcode [problem 392](https://leetcode.com/problems/is-subsequence/); **Difficulty:** `Easy`

## Problem Statement

Given two strings `s` and `t`, return `true` _if_ `s` _is a subsequence of_ `t`, _or_ `false` _otherwise_.

A **subsequence** of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., `"ace"` is a subsequence of <code>"<u>a</u>b<u>c</u>d<u>e</u>"</code> while `"aec"` is not).

## Constraints:

- `0 <= s.length <= 100`
- <code> 0 <= t.length <= 10<sup>4</sup> </code>
- `s` and `t` consists of only lowercase English letters.

## Example 1:

**Input:** `s = "abc", t = "ahbgdc"`

**Output:** `true`

## Example 2:

**Input:** `s = "axc", t = "ahbgdc"`

**Output:** `false`

## Follow up

Suppose there are lots of incoming `s`, say <code>s<sub>1</sub>, s<sub>2</sub>, ..., s<sub>k</sub></code> where <code>k >= 10<sup>9</sup></code>, and you want to check one by one to see if `t` has its subsequence. In this scenario, how would you change your code?

## Submitted Solution

The implemented [solution](solution1.cpp) received the following rating on Leetcode:

![image](https://user-images.githubusercontent.com/33619581/127723829-91d6622b-b0c1-4f18-a948-cc26bb9c3168.png)
