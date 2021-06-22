# Reformat The String

Leetcode [problem 1417](https://leetcode.com/problems/reformat-the-string/); **Difficulty:** `Easy`

## Problem Statement

Given alphanumeric string `s`. (**Alphanumeric string** is a string consisting of lowercase English letters and digits).

You have to find a permutation of the string where no letter is followed by another letter and no digit is followed by another digit. That is, no two adjacent characters have the same type.

Return _the reformatted string_ or return **an empty string** if it is impossible to reformat the string.

## Constraints:

- `1 <= s.length <= 500`
- `s` consists of only lowercase English letters and/or digits.

## Example 1:

**Input:** `s = "a0b1c2"`

**Output:** `"0a1b2c"`

**Explanation:**

```
 No two adjacent characters have the same type in "0a1b2c". "a0b1c2", "0a1b2c", "0c2a1b" are also valid permutations.
```

## Example 2:

**Input:** `s = "leetcode"`

**Output:** `""`

**Explanation:**

```
"leetcode" has only characters so we cannot separate them by digits.
```

## Example 3:

**Input:** `s = "1229857369"`

**Output:** `""`

**Explanation:**

```
"1229857369" has only digits so we cannot separate them by characters.
```

## Example 4:

**Input:** `s = "covid2019"`

**Output:** `"c2o0v1i9d"`

## Example 5:

**Input:** `s = "ab123"`

**Output:** `"1a2b3"`

## Submitted Solution

The implemented [solution](solution.cpp) received the following rating on Leetcode:

![image](https://user-images.githubusercontent.com/33619581/123010658-51d41580-d3bf-11eb-81c7-239d250f46d5.png)
