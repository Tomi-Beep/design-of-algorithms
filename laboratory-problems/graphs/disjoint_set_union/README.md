# Disjoint Set Union Problems
## Problem 1
You are given an undirected graph with **N** vertices and 0 edges. Process **Q** queries of the following types:

- `0 u v`: Add an edge \((u, v)\).
- `1 u v`: Print `1` if \(u\) and \(v\) are in the same connected component, `0` otherwise.

### Constraints
- \(1 \leq N \leq 200,000\)
- \(1 \leq Q \leq 200,000\)
- \(0 \leq u, v < N\)

## Problem 2
Nick's company employed \( n \) people. Now Nick needs to build a tree hierarchy of «supervisor-subordinate» relations in the company (this means that each employee, except one, has exactly one supervisor). There are \( m \) applications written in the following form: «employee \( a_i \) is ready to become a supervisor of employee \( b_i \) at extra cost \( c_i \)». The qualification \( q_j \) of each employee is known, and for each application the following is true: \( q_{a_i} > q_{b_i} \).

Would you help Nick calculate the minimum cost of such a hierarchy, or find out that it is impossible to build it?

### Input

The first input line contains integer \( n \) (\( 1 \leq n \leq 1000 \)) — the number of employees in the company. The following line contains \( n \) space-separated numbers \( q_j \) (\( 0 \leq q_j \leq 10^6 \)) — the employees' qualifications. The following line contains number \( m \) (\( 0 \leq m \leq 10000 \)) — the number of received applications. The following \( m \) lines contain the applications themselves, each of them in the form of three space-separated numbers: \( a_i, b_i \) and \( c_i \) (\( 1 \leq a_i, b_i \leq n, 0 \leq c_i \leq 10^6 \)). Different applications can be similar, i.e., they can come from one and the same employee who offered to become a supervisor of the same person but at a different cost. For each application, \( q_{a_i} > q_{b_i} \).

### Output

Output the only line — the minimum cost of building such a hierarchy, or -1 if it is impossible to build it.
