# Employee Importance

Leetcode [problem 690](https://leetcode.com/problems/employee-importance/); **Difficulty:** `Easy`

## Problem Statement

You have a data structure of employee information, which includes the employee's unique id, their importance value, and their direct subordinates' id.

You are given an array of employees `employees` where:

 - `employees[i].id` is the ID of the <code>i<sup>th</sup></code> employee.
 - `employees[i].importance` is the importance value of the <code>i<sup>th</sup></code> employee.
 - `employees[i].subordinates` is a list of the IDs of the subordinates of the <code>i<sup>th</sup></code> employee.

Given an integer `id` that represents the ID of an employee, return _the total importance value of this employee and all their subordinates_.

## Constraints:

- `1 <= employees.length <= 2000`
- `1 <= employees[i].id <= 2000`
- All `employees[i].id` are **unique**.
- `-100 <= employees[i].importance <= 100`
- One employee has at most one direct leader and may have several subordinates.
- `id` is guaranteed to be a valid employee id.

## Example 1:

![image](https://user-images.githubusercontent.com/33619581/127747212-53fdbcb0-a336-42e6-9365-616d8d9f9851.png)

**Input:** `employees = [[1,5,[2,3]],[2,3,[]],[3,3,[]]], id = 1`

**Output:** `11`

**Explanation:**
```
Employee 1 has importance value 5, and he has two direct subordinates: employee 2 and employee 3.
They both have importance value 3.
So the total importance value of employee 1 is 5 + 3 + 3 = 11.
```

## Example 2:

![image](https://user-images.githubusercontent.com/33619581/127747230-0a65e170-903b-47f8-9578-b3dae54da024.png)

**Input:** `employees = [[1,2,[5]],[5,-3,[]]], id = 5`

**Output:** `-3`

## Submitted Solution

The implemented [solution](solution.cpp) received the following rating on Leetcode:

![image](https://user-images.githubusercontent.com/33619581/127747260-5ea94477-16f1-4150-a53f-628f48d0c917.png)
