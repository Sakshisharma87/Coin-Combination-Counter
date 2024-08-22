
**Coin Change Problem**
=====================

**Problem Statement**
-------------------

Given a set of coins and their corresponding denominations, write a program to calculate the number of ways to make change for a given amount.

**Features**
--------

* **Dynamic Programming**: The program uses dynamic programming to solve the problem in an efficient manner.
* **Coin Change Counter**: The program can be used to calculate the number of ways to make change for a given amount using a set of coins with different denominations.

**Usage**
-----

### Running the Program

1. Compile the program using `gcc` or your preferred compiler.
2. Run the program by executing the compiled binary.
3. Enter the number of coins and their corresponding denominations.
4. Enter the amount for which you want to make change.
5. The program will display the number of ways to make change.

### Example Output
```
enter the number of distinct coins(not more than 100):- 3
enter coins value:-
enter value of 0th coin:1
enter value of 1th coin:2
enter value of 2th coin:3
enter the required sum:4
No. of combination of the coins possible are:
4
```

### Code Structure
----------------

The code consists of two main functions:

1. `countcombi`: calculates the number of ways to make change for a given amount using a set of coins with different denominations.
2. `main`: runs the program and prompts the user to enter data and displays the result.

### Coin Combination Problem
---------------------------

The program can also be used to calculate the number of ways to combine coins to reach a target sum.

### Example Output
```
Enter the no. of coins
3
Enter values of coins:-
1
2
3
Enter target sum
4
4
```

### License
---------

The Coin Change Problem is released under the MIT License.
