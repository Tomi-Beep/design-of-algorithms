# BFS Problems
## Problem 1 - Escape the Labyrinth

You and some monsters are trapped in a labyrinth. Every time you move, all monsters can also move simultaneously. Your goal is to reach the boundary of the labyrinth without ever occupying the same cell as a monster. Your solution must work even if the monsters know your path in advance.

## Input Format

- First line: Two integers `n` and `m` (1 ≤ n, m ≤ 1000) representing the labyrinth dimensions
- Next `n` lines: The labyrinth map where:
  - `A` is your starting position (exactly one exists)
  - `M` represents monsters (zero or more)
  - `#` are walls
  - `.` are walkable paths

## Output Format

- First line: "YES" if escape is possible, "NO" otherwise
- If "YES":
  - Second line: Path length (≤ n×m)
  - Third line: Path as string of `U` (up), `D` (down), `L` (left), `R` (right)

## Example
**Input:**
5 8
########
#M..A..#
#.#.M#.#
#M#..#..
#.######

**Output:**
YES
5
RRDDR

## Constraints
- Labyrinth boundaries are escape points
- Monsters move optimally to intercept you
- Path must be valid in worst-case monster movement scenario

## Problem 2 
