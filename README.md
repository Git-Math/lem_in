# Lem in
Algorithm to find the quickest way to get n ants across a farm.

## Rules
At the beginning, all the ants are in the room ##start. The goal is to bring them to the room ##end with as few turns as possible. Each room can only contain one ant at a time (except at ##start and ##end which can contain as many ants as necessary).  

At each turn each ant can be moved once through a tube (the room at the receiving end must be empty).

## How to compile
From the root of the repository run `make`

## How to run
From the root of the repository run `./lem-in < [lem in file]`

## Lem in file
The lem in file contains the number of ants, the rooms and the links.

## Example
```
$ ./lem-in < test_lemin/3.lmin
3
##start
0 1 0
##end
1 5 0
2 9 0
3 13 0
0-2
2-3
3-1

L1-2
L1-3 L2-2
L1-1 L2-3 L3-2
L2-1 L3-3
L3-1
```
