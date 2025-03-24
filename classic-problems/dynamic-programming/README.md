# Classic problems solved with Dynamic Programming
## 1. Coin Change Problem (Fibonacci Variant)

## 2. Theater Ticket Line Problem (Pairing Optimization)
There are n people standing in line to buy tickets. Each person takes t_i time to buy their ticket alone. However, any two adjacent people can choose to buy tickets together as a pair, which takes p_i time (where p_i is the time for the pair (i, i+1)). Determine the minimum total time required for all people to buy their tickets, considering both individual and paired options.

## 3. Assembly Line Scheduling (Optimal Pathfinding)
A factory has two parallel assembly lines, each with n stations. A product starts at either line and moves through stations sequentially. The time to process at station j on line i is a[i][j]. Transferring between lines after station j takes t[i][j] time. The entry time for line i is e[i], and the exit time is x[i]. Find the minimum total time to manufacture the product.

## 4. Knight's Phone Numbers (Counting Sequences)
Given a phone keypad:
```
123
456
789
 0
```
A knight moves in an "L-shape" (e.g., from 1, the next digit can be 6 or 8). Count the number of n-digit numbers where every consecutive pair of digits follows a knight's move.
