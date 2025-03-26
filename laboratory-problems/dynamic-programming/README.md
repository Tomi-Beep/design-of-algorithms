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

## Problem 3: Cut Ribbon - Difficulty: 1300
Polycarpus has a ribbon, its length is n. He wants to cut the ribbon in a way that fulfils the following two conditions:

After the cutting each ribbon piece should have length a, b or c.
After the cutting the number of ribbon pieces should be maximum.
Help Polycarpus and find the number of ribbon pieces after the required cutting.

Input
The first line contains four space-separated integers n, a, b and c (1 ≤ n, a, b, c ≤ 4000) — the length of the original ribbon and the acceptable lengths of the ribbon pieces after the cutting, correspondingly. The numbers a, b and c can coincide.

Output
Print a single number — the maximum possible number of ribbon pieces. It is guaranteed that at least one correct ribbon cutting exists.

## Problem 4: Boredom - Difficulty: 1500
Alex doesn't like boredom. That's why whenever he gets bored, he comes up with games. One long winter evening he came up with a game and decided to play it.

Given a sequence a consisting of n integers. The player can make several steps. In a single step he can choose an element of the sequence (let's denote it ak) and delete it, at that all elements equal to ak + 1 and ak - 1 also must be deleted from the sequence. That step brings ak points to the player.

Alex is a perfectionist, so he decided to get as many points as possible. Help him.

Input
The first line contains integer n (1 ≤ n ≤ 10^5) that shows how many numbers are in Alex's sequence.

The second line contains n integers a1, a2, ..., an (1 ≤ ai ≤ 10^5).

Output
Print a single integer — the maximum number of points that Alex can earn.

## Problem 5: Basketball Exercise - Difficulty: 1400
Finally, a basketball court has been opened in SIS, so Demid has decided to hold a basketball exercise session. 2⋅n students have come to Demid's exercise session, and he lined up them into two rows of the same size (there are exactly n people in each row). Students are numbered from 1 to n in each row in order from left to right.

Now Demid wants to choose a team to play basketball. He will choose players from left to right, and the index of each chosen player (excluding the first one taken) will be strictly greater than the index of the previously chosen player. To avoid giving preference to one of the rows, Demid chooses students in such a way that no consecutive chosen students belong to the same row. The first student can be chosen among all 2n students (there are no additional constraints), and a team can consist of any number of students.

Demid thinks, that in order to compose a perfect team, he should choose students in such a way, that the total height of all chosen students is maximum possible. Help Demid to find the maximum possible total height of players in a team he can choose.

Input
The first line of the input contains a single integer n (1≤n≤10^5) — the number of students in each row.

The second line of the input contains n integers h1,1,h1,2,…,h1,n(1≤h1,i≤10^9), where h1,i is the height of the i-th student in the first row.

The third line of the input contains n integers h2,1,h2,2,…,h2,n (1≤h2,i≤10^9), where h2,i is the height of the i-th student in the second row.

Output
Print a single integer — the maximum possible total height of players in a team Demid can choose.
