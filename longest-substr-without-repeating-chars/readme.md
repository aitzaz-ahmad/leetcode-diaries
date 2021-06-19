# Longest Substring Without Repeating Characters

Leetcode [problem 3](https://leetcode.com/problems/longest-substring-without-repeating-characters/); **Difficulty:** `Medium`

## Problem Statement

Given a string `s`, find the length of the **longest substring** without repeating characters.

## Constraints:

- `0 <= s.length <= 50000`
- `s` consists of English letters, digits, symbols and spaces.

## Example 1:

**Input:** `s = "abcabcbb"`

**Output:** `3`

**Explanation:**

```
The answer is "abc", with the length of 3.
```

## Example 2:

**Input:** `s = "bbbbb"`

**Output:** `1`

**Explanation:**

```
The answer is "b", with the length of 1.
```

## Example 3:

**Input:** `s = "pwwkew"`

**Output:** `3`

**Explanation:**

```
The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
```

## Example 4:

**Input:** `s = ""`

**Output:** `0`

## Submitted Solution

The implemented [solution](solution.cpp) received the following rating on Leetcode:

![image](https://user-images.githubusercontent.com/33619581/122651753-45d82180-d13b-11eb-9c9c-21ac4e42a0e0.png)
