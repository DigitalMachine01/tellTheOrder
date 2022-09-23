Challenge: Given 10 numbers, print the largest consecutive order it contains and mention its nature (increasing / decreasing).

My Solution:

I. Scan 10 numbers as input from the user.

II. Define a structure whose members can contains the state of a pattern.

III. Declare two arrays of above structure, one to cpature increment trends and the other to capture decrement trends.

IV. Go in a while loop through the array, and capture the start and end indices of the increment/decrement patterns. More than one increment patterns can be stored in different array elements of the increment structure array and the same for decrement structure array.

V. After that go in a loop to determine maximum trend lenght between incremement and decrement trends, withthat capture the index (i_num, d_num) of the array of that max length pattern trend structure.

VI. Print the largest trend and its nature on the output screen.
