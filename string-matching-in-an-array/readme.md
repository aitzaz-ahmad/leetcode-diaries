# String Matching in an Array

Leetcode [problem 1408](https://leetcode.com/problems/running-sum-of-1d-array/); **Difficulty:** `Easy`

## Problem Statement

Given an array of string `words`. Return all strings in `words` which is substring of another word in **any** order.

String `words[i]` is substring of `words[j]`, if can be obtained removing some characters to left and/or right side of `words[j]`.

## Constraints:

- `1 <= words.length <= 100`
- `1 <= words[i].length <= 30`
- `words[i]` contains only lowercase English letters.
- It's **guaranteed** that `words[i]` will be unique.

## Example 1:

**Input:** `words = ["mass","as","hero","superhero"]`

**Output:** `["as","hero"]`

**Explanation:**

```
"as" is substring of "mass" and "hero" is substring of "superhero".
["hero","as"] is also a valid answer.
```

## Example 2:

**Input:** `words = ["leetcode","et","code"]`

**Output:** `["et","code"]`

**Explanation:**

```
"et", "code" are substring of "leetcode".
```

## Example 3:

**Input:** `words = ["blue","green","bu"]`

**Output:** `[]`

## Submitted Solution

The implemented [solution](solution.cpp) received the following rating on Leetcode:

![image](https://user-images.githubusercontent.com/33619581/122307914-90735700-cf0b-11eb-9fc1-866d2b1314c2.png)
