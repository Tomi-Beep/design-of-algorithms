# String Problems: Palindromes and usage of Z Algorithm
## Problem 1: Make Palindrome
A string is called palindrome if it reads the same from left to right and from right to left. For example "kazak", "oo", "r" and "mikhailrubinchikkihcniburliahkim" are palindroms, but strings "abb" and "ij" are not.

You are given string s consisting of lowercase Latin letters. At once you can choose any position in the string and change letter in that position to any other lowercase letter. So after each changing the length of the string doesn't change. At first you can change some letters in s. Then you can permute the order of letters as you want. Permutation doesn't count as changes.

You should obtain palindrome with the minimal number of changes. If there are several ways to do that you should get the lexicographically (alphabetically) smallest palindrome. So firstly you should minimize the number of changes and then minimize the palindrome lexicographically.

### Input
The only line contains string s (1 ≤ |s| ≤ 2·105) consisting of only lowercase Latin letters.

### Output
Print the lexicographically smallest palindrome that can be obtained with the minimal number of changes.

## Problem 2: Palindrome 2000
A palindrome is a symmetrical string, that is, a string read identically from left to right as well as from right to left. You are to write a program which, given a string, determines the minimal number of characters to be inserted into the string in order to obtain a palindrome. As an example, by inserting 2 characters, the string "Ab3bd" can be transformed into a palindrome ("dAb3bAd" or "Adb3bdA"). However, inserting fewer than 2 characters does not produce a palindrome.

### Input
The first line contains one integer: the length of the input string N, 3 ≤ N ≤ 5000. The second line contains one string with length N. The string is formed from uppercase letters from ‘A’ to ‘Z’, lowercase letters from ‘a’ to ‘z’ and digits from ‘0’ to ‘9’. Uppercase and lowercase letters are to be considered distinct.

### Output
The first line contains one integer, which is the desired minimal number.

## Problem 3: Finding Borders
A border of a string is a prefix that is also a suffix of the string but not the whole string. For example, the borders of abcababcab are ab and abcab.

Your task is to find all border lengths of a given string.

### Input
The only input line has a string of length 
n
n consisting of characters a–z.

### Output
Print all border lengths of the string in increasing order.

### Constraints
1≤n≤10^6
