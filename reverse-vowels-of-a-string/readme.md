# Reverse Vowels of a String

Leetcode [problem 345](https://leetcode.com/problems/reverse-vowels-of-a-string/); **Difficulty:** `Easy`

## Problem Statement

Given a string s, reverse only all the vowels in the string and return it.

The vowels are `'a'`, `'e'`, `'i'`, `'o'`, and `'u'`, and they can appear in both cases.

## Constraints:

- <code> 1 <= s.length <= 3 * 10<sup>5</sup> </code>
- `s`  consist of **printable ASCII** characters.

## Example 1:

**Input:** `s = "hello"`

**Output:** `"holle"`

## Example 2:

**Input:** `s = "leetcode"`

**Output:** `"leotcede"`

## Submitted Solution

The first [solution](solution1.cpp) received the following rating on Leetcode:

![image](https://user-images.githubusercontent.com/33619581/123455973-9a1f4d80-d5e2-11eb-8f62-f4ccc0feac87.png)

By making a simple and small improvement to the implementation of the `IsVowel` convenience method in the second [solution](solution2.cpp), the Leetcode rating improved to:

![image](https://user-images.githubusercontent.com/33619581/123455835-75c37100-d5e2-11eb-9702-70c6080dee1b.png)
