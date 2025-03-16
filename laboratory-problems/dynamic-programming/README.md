# Dynamic Programming Problems

## Problem 1: Hit the Lottery - Difficulty: 800
Allen has a LOT of money. He has n
dollars in the bank. For security reasons, he wants to withdraw it in cash (we will not disclose the reasons here). The denominations for dollar bills are 1, 5, 10, 20, 100. 
What is the minimum number of bills Allen could receive after withdrawing his entire balance?

Input
The first and only line of input contains a single integer n(1≤n≤109).

Output
Output the minimum number of bills that Allen could receive.

## Problem 2: Find the Different Ones! - Difficulty: 1300
You are given an array a of n integers, and q queries.

Each query is represented by two integers l and r (1≤l≤r≤n). Your task is to find, for each query, two indices i and j (or determine that they do not exist) such that:
- l≤i≤r;
- l≤j≤r;
- ai≠aj.
In other words, for each query, you need to find a pair of different elements among al,al+1,…,ar, or report that such a pair does not exist.

Input
The first line of the input contains a single integer t (1≤t≤10^4) — the number of test cases. The descriptions of the test cases follow.

The first line of each test case contains a single integer n (2≤n≤2⋅10^5) — the length of the array a.

The second line of each test case contains n integers a1,a2,…,an (1≤ai≤10^6) — the elements of the array.

The third line of each test case contains a single integer q (1≤q≤2⋅10^5) — the number of queries.

The next q lines contain two integers each, l and r (1≤l<r≤n) — the boundaries of the query.

It is guaranteed that the sum of the values of n across all test cases does not exceed 2⋅105. Similarly, it is guaranteed that the sum of the values of q across all test cases does not exceed 2⋅105.

Output
For each query, output two integers separated by space: i and j (l≤i,j≤r), for which ai≠aj. If such a pair does not exist, output i=−1 and j=−1.

You may separate the outputs for the test cases with empty lines. This is not a mandatory requirement.
