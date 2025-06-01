# Shortest Path in Weighted Undirected Graph Problem

Given a weighted undirected graph with vertices labeled from 1 to n, find the shortest path between vertex 1 and vertex n.

## Input Format

- **First line**: Two integers `n` and `m`  
  - `n` (2 ≤ n ≤ 10^5): Number of vertices  
  - `m` (0 ≤ m ≤ 10^5): Number of edges  
- **Next `m` lines**: Three integers `a_i`, `b_i`, and `w_i` per line, describing an edge:  
  - `a_i`, `b_i` (1 ≤ a_i, b_i ≤ n): Endpoints of the edge  
  - `w_i` (1 ≤ w_i ≤ 10^6): Weight of the edge  

**Notes**:  
- The graph may contain loops and multiple edges between the same pair of vertices.  
- Vertices are 1-indexed.  

## Output Format

- If no path exists from vertex 1 to vertex n, output `-1`.  
- Otherwise, output the shortest path as a sequence of vertices (including start and end). If multiple shortest paths exist, print any one.  

## Example

**Input**:  
4 4
1 2 1
2 3 2
3 4 3
1 4 6

**Possible Output**:  
1 2 3 4

## Constraints

- Large input size (n and m up to 10^5), requiring efficient algorithms like Dijkstra’s (with priority queues).  
- Edge weights are positive (1 ≤ w_i ≤ 10^6).  
1 2 3 4
