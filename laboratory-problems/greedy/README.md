# Greedy Problems

## Problem 1: Minimum Varied Number - Difficulty: 800
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

## Problem 4: Regular Bracket Sequence - Difficulty: 1400
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

## Problem 5: Alternating Subsequence - Difficulty: 1200
Recall that the sequence b is a subsequence of the sequence a if b can be derived from a by removing zero or more elements without changing the order of the remaining elements. For example, if a=[1,2,1,3,1,2,1], then possible subsequences are: [1,1,1,1], [3], and [1,2,1,3,1,2,1], but not [3,2,3] and [1,1,1,1,2].

You are given a sequence a consisting of n positive and negative elements (there is no zeros in the sequence).

Your task is to choose maximum by size (length) alternating subsequence of the given sequence (i.e. the sign of each next element is the opposite from the sign of the current element, like positive-negative-positive and so on or negative-positive-negative and so on). Among all such subsequences, you have to choose one which has the maximum sum of elements.

In other words, if the maximum length of alternating subsequence is k then your task is to find the maximum sum of elements of some alternating subsequence of length k.

You have to answer t independent test cases.

### Input
The first line of the input contains one integer t (1≤t≤10⁴) — the number of test cases. Then t test cases follow.

The first line of the test case contains one integer n (1≤n≤2⋅10⁵) — the number of elements in a. The second line of the test case contains n integers a₁, a₂,…,aₙ (−10⁹≤aᵢ≤10⁹, aᵢ≠0), where aᵢ is the i-th element of a.

It is guaranteed that the sum of n over all test cases does not exceed 2⋅10⁵ (∑n≤2⋅10⁵).

### Output
For each test case, print the answer — the maximum sum of the maximum by size (length) alternating subsequence of a.

## Problem 6: Mocha and Red and Blue
As their story unravels, a timeless tale is told once again...

Shirahime, a friend of Mocha's, is keen on playing the music game Arcaea and sharing Mocha interesting puzzles to solve. This day, Shirahime comes up with a new simple puzzle and wants Mocha to solve them. However, these puzzles are too easy for Mocha to solve, so she wants you to solve them and tell her the answers. The puzzles are described as follow.

There are n squares arranged in a row, and each of them can be painted either red or blue.

Among these squares, some of them have been painted already, and the others are blank. You can decide which color to paint on each blank square.

Some pairs of adjacent squares may have the same color, which is imperfect. We define the imperfectness as the number of pairs of adjacent squares that share the same color.

For example, the imperfectness of "BRRRBBR" is 3, with "BB" occurred once and "RR" occurred twice.

Your goal is to minimize the imperfectness and print out the colors of the squares after painting.

### Input
Each test contains multiple test cases.

The first line contains a single integer t (1≤t≤100) — the number of test cases. Each test case consists of two lines.

The first line of each test case contains an integer n (1≤n≤100) — the length of the squares row.

The second line of each test case contains a string s with length n, containing characters 'B', 'R' and '?'. Here 'B' stands for a blue square, 'R' for a red square, and '?' for a blank square.

### Output
For each test case, print a line with a string only containing 'B' and 'R', the colors of the squares after painting, which imperfectness is minimized. If there are multiple solutions, print any of them.

## Problem 7: TMT Document
The student council has a shared document file. Every day, some members of the student council write the sequence TMT (short for Towa Maji Tenshi) in it.

However, one day, the members somehow entered the sequence into the document at the same time, creating a jumbled mess. Therefore, it is Suguru Doujima's task to figure out whether the document has malfunctioned. Specifically, he is given a string of length n whose characters are all either T or M, and he wants to figure out if it is possible to partition it into some number of disjoint subsequences, all of which are equal to TMT. That is, each character of the string should belong to exactly one of the subsequences.

A string a is a subsequence of a string b if a can be obtained from b by deletion of several (possibly, zero) characters.

### Input
The first line contains an integer t (1≤t≤5000) — the number of test cases.

The first line of each test case contains an integer n (3≤n<10⁵), the number of characters in the string entered in the document. It is guaranteed that n is divisible by 3.

The second line of each test case contains a string of length n consisting of only the characters T and M.

It is guaranteed that the sum of n over all test cases does not exceed 10⁵.

### Output
For each test case, print a single line containing YES if the described partition exists, and a single line containing NO otherwise.

## Problem 8: Particles
You have discovered n mysterious particles on a line with integer charges of c₁, ..., cₙ. You have a device that allows you to perform the following operation:

Choose a particle and remove it from the line. The remaining particles will shift to fill in the gap that is created. If there were particles with charges x and y directly to the left and right of the removed particle, they combine into a single particle of charge x + y.

For example, if the line of particles had charges of [−3, 1, 4, −1, 5, −9], performing the operation on the 4th particle will transform the line into [−3, 1, 9, −9].

![image](https://github.com/user-attachments/assets/b9d92623-81d1-48ea-8774-412a5c5811fb)

If we then use the device on the 1st particle in this new line, the line will turn into [1, 9, −9].

You will perform operations until there is only one particle left. What is the maximum charge of this remaining particle that you can obtain?

### Input
Each test contains multiple test cases. The first line contains the number of test cases t (1 ≤ t ≤ 10⁴). The description of the test cases follows.

## Problem 08: People and Keys
There are n people and k keys on a straight line. Every person wants to get to the office which is located on the line as well. To do that, he needs to reach some point with a key, take the key and then go to the office. Once a key is taken by somebody, it couldn't be taken by anybody else.

You are to determine the minimum time needed for all n people to get to the office with keys. Assume that people move a unit distance per 1 second. If two people reach a key at the same time, only one of them can take the key. A person can pass through a point with a key without taking it.

Input
The first line contains three integers n, k and p (1 ≤ n ≤ 1 000, n ≤ k ≤ 2 000, 1 ≤ p ≤ 10^9) — the number of people, the number of keys and the office location.

The second line contains n distinct integers a1, a2, ..., an (1 ≤ ai ≤ 10^9) — positions in which people are located initially. The positions are given in arbitrary order.

The third line contains k distinct integers b1, b2, ..., bk (1 ≤ bj ≤ 10^9) — positions of the keys. The positions are given in arbitrary order.

Note that there can't be more than one person or more than one key in the same point. A person and a key can be located in the same point.

Output
Print the minimum time (in seconds) needed for all n to reach the office with keys.

The first line of each test case contains a single integer n (1 ≤ n ≤ 2⋅10⁵).

The second line of each test case contains n integers c₁, ..., cₙ (−10⁹ ≤ cᵢ ≤ 10⁹).

It is guaranteed that the sum of n over all test cases does not exceed 2⋅10⁵.

### Output
For each test case, output one integer, the maximum charge of the remaining particle.
