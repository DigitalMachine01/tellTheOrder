Challenge: Given 10 numbers, print the largest consecutive order it contains and mention its nature (increasing / decreasing).

My Solution:

I. Scan 10 numbers as input from the user.

II. Define a structure whose members can contains the state of a pattern.

III. Declare two arrays of above structure, one to capture increment trends and the other to capture decrement trends.

IV. Go in a while loop through the array, and capture the start and end indices of the increment/decrement patterns. More than one increment patterns can be stored in different array elements of the increment structure array (same for decrement structure array).

V. After that go in a loop to determine maximum trend lenght between incremement and decrement trends, with that capture the index (i_num, d_num) of the structure array that has the max length.

VI. Print the largest trend and its nature on the output screen.


Benefits of the code..

Write Comments

Dynamic allocation, linked list, CLI Iterface, Doppler effect

Increasing and decresing trend - make it as the member of the structure

Go through Jasmine Parser