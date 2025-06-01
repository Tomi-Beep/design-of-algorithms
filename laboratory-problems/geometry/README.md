# Geometry Problems

## Problem 01: Vasya and Cornfield
Vasya owns a cornfield which can be defined with two integers n and d. The cornfield can be represented as a rectangle with vertices having Cartesian coordinates (0, d), (d, 0), (n, n - d) and (n - d, n).

![image](https://github.com/user-attachments/assets/2966e067-acf0-4b6b-b531-449182c38413)

Vasya knows there are m grasshoppers near the field (possibly inside it). The i-th grasshopper is at point (xi, yi). For each grasshopper, determine if it's inside the cornfield (including the border) or outside.

### Input

The first line contains two integers n and d (1 ≤ d < n ≤ 100).  
The second line contains a single integer m (1 ≤ m ≤ 100) — the number of grasshoppers.  
Each of the next m lines contains two integers xi and yi (0 ≤ xi, yi ≤ n) — position of the i-th grasshopper.

### Output

Print m lines. The i-th line should contain "YES" if the position of the i-th grasshopper lies inside or on the border of the cornfield. Otherwise, print "NO".

You can print each letter in any case (upper or lower).

### Examples

#### Input 1
7 2
4
2 4
4 1
6 3
4 5

#### Output 1
YES
NO
NO
YES

#### Input 2
8 7
4
4 4
2 8
8 1
6 1

#### Output 2
YES
NO
YES
YES

### Note

For the first example:
- Grasshoppers at (2, 4) and (4, 5) are inside the cornfield.

For the second example:
- Grasshoppers at (4, 4), (8, 1), and (6, 1) are inside the cornfield.

## Problem 02: Point in Polygon

You are given a polygon of n vertices and a list of m points. Your task is to determine for each point if it is inside, outside or on the boundary of the polygon.

The polygon consists of n vertices (x1, y1), (x2, y2), ..., (xn, yn). The vertices (xi, yi) and (xi+1, yi+1) are adjacent for i = 1, 2, ..., n - 1, and the vertices (x1, y1) and (xn, yn) are also adjacent.

### Input

The first input line has two integers n and m: the number of vertices in the polygon and the number of points.

After this, there are n lines that describe the polygon. The ith such line has two integers xi and yi.

You may assume that the polygon is simple, i.e., it does not intersect itself.

Finally, there are m lines that describe the points. Each line has two integers x and y.

### Output

For each point, print "INSIDE", "OUTSIDE" or "BOUNDARY".

## #Constraints

- 3 ≤ n, m ≤ 1000
- 1 ≤ m ≤ 1000
- -10^9 ≤ xi, yi ≤ 10^9
- -10^9 ≤ x, y ≤ 10^9

### Example

#### Input
4 3
1 1
4 2
3 5
1 4
2 3
3 1
1 3

### Output
INSIDE
OUTSIDE
BOUNDARY

## Problem 03: Number of Parallelograms

You are given n points on a plane. All the points are distinct and no three of them lie on the same line. Find the number of parallelograms with the vertices at the given points.

### Input

The first line of the input contains integer n (1 ≤ n ≤ 2000) — the number of points.

Each of the next n lines contains two integers (xi, yj) (0 ≤ xi, yj ≤ 10^9) — the coordinates of the i-th point.

### Output

Print the only integer c — the number of parallelograms with the vertices at the given points.

### Examples

#### Input
4
0 1
1 0
1 1
2 0

#### Output
1
