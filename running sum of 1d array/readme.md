## Running Sum of 1d Array

Leetcode [problem 1480](https://leetcode.com/problems/running-sum-of-1d-array/); **Difficulty:** `Easy`



## Problem Statement

Given an array `nums`. We define a running sum of an array as `runningSum[i] = sum(nums[0]…nums[i])`.

Return the running sum of `nums`.

 
 
### Constraints:

```
1 <= nums.length <= 1000
-10^6 <= nums[i] <= 10^6
```

### Example 1:

**Input:** `nums = [1,2,3,4]`

**Output:** `[1,3,6,10]` 

**Explanation:** 
```
Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].
```

### Example 2:

**Input:** `nums = [1,1,1,1,1]`

**Output:** `[1,2,3,4,5]` 

**Explanation:** 

```
Running sum is obtained as follows: [1, 1+1, 1+1+1, 1+1+1+1, 1+1+1+1+1].
```

### Example 3:

**Input:** `nums = [3,1,2,10,1]`

**Output:** `[3,4,6,16,17]`


## Submitted Solution

The implemented [solution](solution.cpp) received the following rating on Leetcode:

![image](https://user-images.githubusercontent.com/33619581/121965597-8d426480-cd6d-11eb-9292-3fd2311f634e.png)


