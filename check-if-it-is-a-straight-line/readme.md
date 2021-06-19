# Check If It Is a Straight Line

Leetcode [problem 1232](https://leetcode.com/problems/check-if-it-is-a-straight-line/); **Difficulty:** `Easy`

## Problem Statement

You are given an array `coordinates`, `coordinates[i] = [x, y]`, where `[x, y]` represents the coordinate of a point. _Check if these points make a straight line in the XY plane_.

## Constraints:

- `2 <= coordinates.length <= 1000`
- `coordinates[i].length == 2`
- `10^4 <= coordinates[i][0], coordinates[i][1] <= 10^4`
- `coordinates` contains no duplicate point.

## Example 1:

![image](https://user-images.githubusercontent.com/33619581/122651030-7bc6d700-d136-11eb-8afe-f95903194ee5.png)

**Input:** `coordinates = [[1,2],[2,3],[3,4],[4,5],[5,6],[6,7]]`

**Output:** `true`

## Example 2:

![image](https://user-images.githubusercontent.com/33619581/122651054-a153e080-d136-11eb-99ee-62802479c43c.png)

**Input:** `coordinates = [[1,1],[2,2],[3,4],[4,5],[5,6],[7,7]]`

**Output:** `false`

## Submitted Solution

The implemented [solution](solution.cpp) received the following rating on Leetcode:

![image](https://user-images.githubusercontent.com/33619581/122650953-00652580-d136-11eb-8bb6-78680f71e6f2.png)
