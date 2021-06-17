# Check if One String Swap Can Make Strings Equal

Leetcode [problem 1790](https://leetcode.com/problems/check-if-one-string-swap-can-make-strings-equal/); **Difficulty:** `Easy`

## Problem Statement

You are given two strings `s1` and `s2` of equal length. A **string swap** is an operation where you choose two indices in a string (not necessarily different) and swap the characters at these indices.

Return `true` _if it is possible to make both strings equal by performing **at most one string swap** on **exactly one** of the strings_. Otherwise, return `false`.

## Constraints:

- `1 <= s1.length, s2.length <= 100`
- `s1length == s2.length`
- `s1` and `s2`contain only lowercase English letters.

## Example 1:

**Input:** `s1 = "bank", s2 = "kanb"`

**Output:** `true`

**Explanation:**

```
For example, swap the first character with the last character of s2 to make "bank".
```

## Example 2:

**Input:** `s1 = "attack", s2 = "defend"`

**Output:** `false`

**Explanation:**

```
It is impossible to make them equal with one string swap.
```

## Example 3:

**Input:** `s1 = "kelb", s2 = "kelb"`

**Output:** `true`

**Explanation:**

```
The two strings are already equal, so no string swap operation is required.
```

## Example 4:

**Input:** `s1 = "abcd", s2 = "dcba"`

**Output:** `false`

## Submitted Solution

The implemented [solution](solution.cpp) received the following rating on Leetcode:

![image](https://user-images.githubusercontent.com/33619581/122484449-eeb83c80-cfd4-11eb-90db-8ea1f4b5f89e.png)
