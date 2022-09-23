Challenge: Given 10 numbers, print the largest consecutive order it contains and
mention its nature (increasing / decreasing).

My Solution:

I. Scan 10 numbers as input from the user.
II. Given two numbers, Write a ternary function to decide which one is greater.
III. Declare two indices (one for start, one for end), each for increasing and decreasing order.
IV. Go in a while loop through the array, decide the order with the ternary operator function and update indices of the orders
    based on the trend.
V. Determine the largest trend by subtracting the start index from the end index.
VI. Print the largest trend and its nature on the output screen. 
