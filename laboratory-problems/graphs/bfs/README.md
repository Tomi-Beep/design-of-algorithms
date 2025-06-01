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
Jarmtin is exploring ancient mazes that contain valuable treasures but are protected by dangerous spiky traps. He can avoid a limited number of these traps. Determine if he can retrieve the treasure and escape safely.

### Input Format

- **First line**: Three integers:
  - `n` (2 ≤ n ≤ 4): Number of rows in the maze
  - `m` (2 ≤ m ≤ 4): Width of each row
  - `j` (0 ≤ j ≤ 20): Number of spikes Jarmtin can avoid
- **Next `n` lines**: The maze layout where each character represents:
  - `@`: Entrance/exit (always at least one exists)
  - `x`: Treasure location (always exists)
  - `#`: Wall (impassable)
  - `-`: Safe path
  - `s`: Spike trap (can be avoided `j` times)

**Note**: The maze is surrounded by walls beyond the given grid.

### Output Format

- Print "SUCCESS" if Jarmtin can:
  1. Reach the treasure (`x`)
  2. Return to any entrance/exit (`@`)
  3. Never exceed `j` spike encounters
- Otherwise, print "IMPOSSIBLE"

### Example

#### Input:
3 3 2
#@#
#s#
#x#

#### Output:
SUCCESS

### Constraints

- Maze dimensions are small (2-4 rows/columns)
- Jarmtin must enter and exit via `@` tiles
- The entire maze perimeter is walls
- Solution must account for optimal path to minimize spike encounters
