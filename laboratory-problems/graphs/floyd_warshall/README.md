# Commando Mission

A group of commandos were assigned a critical task. They are to destroy an enemy headquarter. The enemy head quarter consists of several buildings and the buildings are connected by roads. The commandos must visit each building and place a bomb at the base of each building. They start their mission at the base of a particular building and from there they disseminate to reach each building. The commandos must use the available roads to travel between buildings. Any of them can visit one building after another, but they must all gather at a common place when their task in done. In this problem, you will be given the description of different enemy headquarters. Your job is to determine the minimum time needed to complete the mission. Each commando takes exactly one unit of time to move between buildings. You may assume that the time required to place a bomb is negligible. Each commando can carry unlimited number of bombs and there is an unlimited supply of commando troops for the mission.

## Input

Input starts with an integer \( T ( \leq 50 ) \), denoting the number of test cases.

The first line of each case starts with a positive integer \( N \) (\( 1 \leq N \leq 100 \)), where \( N \) denotes the number of buildings in the headquarter. The next line contains a positive integer \( R \), where \( R \) is the number of roads connecting two buildings. Each of the next \( R \) lines contain two distinct numbers \( u \, v \, (0 \leq u, \, v < N) \), this means there is a road connecting building \( u \) to building \( v \). The buildings are numbered from 0 to \( N-1 \). The last line of each case contains two integers \( s \, d \, (0 \leq s, \, d < N) \). Where \( s \) denotes the building from where the mission starts and \( d \) denotes the building where they must meet. You may assume that two buildings will be directly connected by at most one road. The input will be given such that, it will be possible to go from any building to another by using one or more roads.

## Output

For each case, print the case number and the minimum time required to complete the mission.

## Sample Input
2
4
3
0 1
0 2
0 3
0 3
3
1
1 2
1 0

## Sample Output
Case 1: 4
Case 2: 1
