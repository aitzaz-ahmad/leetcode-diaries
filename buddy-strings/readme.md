# Buddy Strings

Leetcode [problem 859](https://leetcode.com/problems/buddy-strings/); **Difficulty:** `Easy`

## Problem Statement

Given two strings `s` and `goal`, return `true` _if you can swap two letters in_ `s` _so the result is equal to_ `goal`, otherwise, return `false`.

Swapping letters is defined as taking two indices `i` and `j` (0-indexed) such that `i != j` and swapping the characters at `s[i]` and `s[j]`.

 - For example, swapping at indices `0` and `2` in `"abcd"` results in `"cbad"`.

## Constraints:

- <code> 1 <= s.length, goal.length <= 2 * 10<sup>4</sup></code>
- `s` and `goal`  consists of lowercase English letters.

## Example 1:

**Input:** `s = "ab", goal = "ba"`

**Output:** `true`

**Explanation:**
```
You can swap s[0] = 'a' and s[1] = 'b' to get "ba", which is equal to goal.
```

## Example 2:

**Input:** `s = "ab", goal = "ab"`

**Output:** `false`

**Explanation:**
```
The only letters you can swap are s[0] = 'a' and s[1] = 'b', which results in "ba" != goal.
```

## Example 3:

**Input:** `s = "aa", goal = "aa"`

**Output:** `true`

**Explanation:**
```
You can swap s[0] = 'a' and s[1] = 'a' to get "aa", which is equal to goal.
```

## Example 4:

**Input:** `s = "aaaaaaabc", goal = "aaaaaaacb"`

**Output:** `true`

## Submitted Solution

The implemented [solution](solution.cpp) received the following rating on Leetcode:

![image](https://user-images.githubusercontent.com/33619581/124384161-53abac00-dcd0-11eb-9941-4fb38f72fb99.png)
