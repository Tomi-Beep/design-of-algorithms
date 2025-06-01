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

## Problem 6: Vacations
Vasya has n days of vacations! So he decided to improve his IT skills and do sport. Vasya knows the following information about each of these n days: whether the gym opened and whether a contest was carried out on the Internet on that day. For the i-th day, there are four options:

1. On this day, the gym is closed, and the contest is not carried out.
2. On this day, the gym is closed, and the contest is carried out.
3. On this day, the gym is open, and the contest is not carried out.
4. On this day, the gym is open, and the contest is carried out.

On each of the days, Vasya can either have a rest, write the contest (if it is carried out on this day), or do sport (if the gym is open on this day).

Find the minimum number of days on which Vasya will have a rest (it means he will not do sport or write the contest). The only limitation that Vasya has is that he does not want to do the same activity on two consecutive days. That means he will not do sport on two consecutive days, and he will not write the contest on two consecutive days.

### Input
The first line contains a positive integer n (1 ≤ n ≤ 100) — the number of days of Vasya's vacations.

The second line contains the sequence of integers a₁, a₂, ..., aₙ (0 ≤ aᵢ ≤ 3) separated by space, where:

- aᵢ equals 0 if, on the i-th day of vacations, the gym is closed, and the contest is not carried out.
- aᵢ equals 1 if, on the i-th day of vacations, the gym is closed, but the contest is carried out.
- aᵢ equals 2 if, on the i-th day of vacations, the gym is open, and the contest is not carried out.
- aᵢ equals 3 if, on the i-th day of vacations, the gym is open, and the contest is carried out.

### Output
Print the minimum possible number of days on which Vasya will have a rest. Remember that Vasya refuses:
- To do sport on any two consecutive days.
- To write the contest on any two consecutive days.

## Problem 7: Sleeping Schedule

Vova had a pretty weird sleeping schedule. There are \( h \) hours in a day. Vova will sleep exactly \( n \) times. The \( i \)-th time he will sleep exactly after \( a_i \) hours from the time he woke up. You can assume that Vova woke up exactly at the beginning of this story (the initial time is \( 0 \)). Each time Vova sleeps exactly one day (in other words, \( h \) hours).

Vova thinks that the \( i \)-th sleeping time is good if he starts to sleep between hours \( l \) and \( r \) inclusive.

Vova can control himself and before the \( i \)-th time can choose between two options: go to sleep after \( a_i \) hours or after \( a_i-1 \) hours.

Your task is to say the maximum number of good sleeping times Vova can obtain if he acts optimally.

### Input
The first line of the input contains four integers \( n, h, l \) and \( r \) (\( 1 \leq n \leq 2000, 3 \leq h \leq 2000, 0 \leq l \leq r < h \)) — the number of times Vova goes to sleep, the number of hours in a day, and the segment of the good sleeping time.

The second line of the input contains \( n \) integers \( a_1, a_2, \dots, a_n \) (\( 1 \leq a_i < h \)), where \( a_i \) is the number of hours after which Vova goes to sleep the \( i \)-th time.

### Output
Print one integer — the maximum number of good sleeping times Vova can obtain if he acts optimally.

## Problem 6: House Robber
You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security systems connected and it will automatically contact the police if two adjacent houses were broken into on the same night.

Given an integer array nums representing the amount of money of each house, return the maximum amount of money you can rob tonight without alerting the police.

 

Example 1:

Input: nums = [1,2,3,1]
Output: 4
Explanation: Rob house 1 (money = 1) and then rob house 3 (money = 3).
Total amount you can rob = 1 + 3 = 4.
Example 2:

Input: nums = [2,7,9,3,1]
Output: 12
Explanation: Rob house 1 (money = 2), rob house 3 (money = 9) and rob house 5 (money = 1).
Total amount you can rob = 2 + 9 + 1 = 12.
 

Constraints:

1 <= nums.length <= 100
0 <= nums[i] <= 400
