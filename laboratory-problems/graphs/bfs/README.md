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

## Problem 3 - Strange Device

Vasya has found a strange device. On the front panel of a device there are: a red button, a blue button and a display showing some positive integer. After clicking the red button, device multiplies the displayed number by two. After clicking the blue button, device subtracts one from the number on the display. If at some point the number stops being positive, the device breaks down. The display can show arbitrarily large numbers. Initially, the display shows number \( n \).

Bob wants to get number \( m \) on the display. What minimum number of clicks he has to make in order to achieve this result?

### Input

The first and the only line of the input contains two distinct integers \( n \) and \( m \) (\( 1 \leq n, \, m \leq 10^4 \)), separated by a space.

### Output

Print a single number — the minimum number of times one needs to push the button required to get the number \( m \) out of number \( n \).

### Examples

| Input    | Output |
|----------|--------|
| 4 6      | 2      |
| 10 1     | 9      |

### Note

In the first example you need to push the blue button once, and then push the red button once.

In the second example, doubling the number is unnecessary, so we need to push the blue button nine times.
