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
# Problem Statement

Nick's company employed n people. Now Nick needs to build a tree hierarchy of «supervisor-subordinate» relations in the company (this means that each employee, except one, has exactly one supervisor). There are m applications written in the following form: «employee a_i is ready to become a supervisor of employee b_i at extra cost c_i». The qualification q_j of each employee is known, and for each application the following is true: q_{a_i} > q_{b_i}.

Would you help Nick calculate the minimum cost of such a hierarchy, or find out that it is impossible to build it?

### Input

- The first line contains an integer n (1 ≤ n ≤ 1000) — the number of employees in the company.
- The second line contains n space-separated integers q_j (0 ≤ q_j ≤ 10^6) — the qualifications of the employees.
- The third line contains an integer m (0 ≤ m ≤ 10000) — the number of received applications.
- The next m lines describe the applications. Each line contains three integers a_i, b_i, and c_i (1 ≤ a_i, b_i ≤ n, 0 ≤ c_i ≤ 10^6), meaning employee a_i can supervise employee b_i at cost c_i.  
  Note: Different applications may repeat the same (a_i, b_i) pair with different costs. For each application, q_{a_i} > q_{b_i} holds.

### Output

Print a single integer — the minimum cost of building the hierarchy, or -1 if it is impossible.
