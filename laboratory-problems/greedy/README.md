# Greedy Problems

## Problewm 1: Minimum Varied Number - Difficulty: 800
Find the minimum number with the given sum of digits `s` such that all digits in it are distinct (i.e., all digits are unique).

### Example
If `s = 20`, then the answer is `389`. This is the minimum number in which all digits are different, and the sum of the digits is `20` (`3 + 8 + 9 = 20`).

For the given `s`, print the required number.

---

### Input
- The first line contains an integer `t` (`1 ≤ t ≤ 45`) — the number of test cases.
- Each test case is specified by a single line containing the integer `s` (`1 ≤ s ≤ 45`).

---

### Output
- Print `t` integers — the answers to the given test cases.

## Problem 2: Make Equal - Difficulty: 800
There are `n` containers of water lined up, numbered from left to right from `1` to `n`. Each container can hold any amount of water; initially, the `i`-th container contains `a[i]` units of water. The sum of `a[i]` is divisible by `n`.

You can apply the following operation any (possibly zero) number of times: pour any amount of water from the `i`-th container to the `j`-th container, where `i` must be less than `j` (i.e., `i < j`). Any index can be chosen as `i` or `j` any number of times.

Determine whether it is possible to make the amount of water in all containers the same using this operation.

---

### Input
- The first line of the input contains a single integer `t` (`1 ≤ t ≤ 10^4`) — the number of test cases. Then the descriptions of the test cases follow.
- The first line of each test case contains a single integer `n` (`1 ≤ n ≤ 2 ⋅ 10^5`) — the number of containers with water.
- The second line of each test case contains `n` integers `a[1], a[2], …, a[n]` (`0 ≤ a[i] ≤ 10^9`) — the amounts of water in the containers.

It is guaranteed that:
- The sum of `a[i]` in each test case does not exceed `2 ⋅ 10^9`.
- The sum of `a[i]` is divisible by `n`.
- The sum of `n` over all test cases in the input does not exceed `2 ⋅ 10^5`.

---

### Output
Determine if it is possible to make the amount of water in all containers equal for each test case. For each test case, output `YES` if it is possible, otherwise output `NO`.

## Problem 3: Increasing Sequence - Difficulty: 800

You are given a sequence `a[1], a[2], …, a[n]`. A sequence `b[1], b[2], …, b[n]` is called good if it satisfies all of the following conditions:

1. `b[i]` is a positive integer for `i = 1, 2, …, n`.
2. `b[i] ≠ a[i]` for `i = 1, 2, …, n`.
3. `b[1] < b[2] < … < b[n]`.

Find the minimum value of `b[n]` among all good sequences `b[1], b[2], …, b[n]`.

---

### Input
Each test contains multiple test cases:
- The first line contains the number of test cases `t` (`1 ≤ t ≤ 100`).
- The description of the test cases follows:
  - The first line of each test case contains a single integer `n` (`1 ≤ n ≤ 100`).
  - The second line of each test case contains `n` integers `a[1], a[2], …, a[n]` (`1 ≤ a[i] ≤ 10^9`).

---

### Output
For each test case, print a single integer — the minimum value of `b[n]` among all good sequences `b`.

## Problem 4: Regular Bracket Sequence
A bracket sequence is called **regular** if it is possible to obtain a correct arithmetic expression by inserting characters «+» and «1» into this sequence. For example:
- Sequences «(())()», «()», and «(()(()))» are regular.
- Sequences «)(», «(()», and «(()))(» are not.

Johnny has a bracket sequence and decided to remove some of the brackets from it to obtain a regular bracket sequence. What is the maximum length of a regular bracket sequence that can be obtained?

---

### Input
The input consists of a single line with a non-empty string of «(» and «)» characters. Its length does not exceed \(10^6\).

---

### Output
Output the maximum possible length of a regular bracket sequence.
