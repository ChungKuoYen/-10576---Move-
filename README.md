# -10576---Move-
Description

There are N numbers in a queue.  The origin sequence is from 1 to N. (1 is the head). The operation “Move a b” means to move all the numbers in front of a (including a) and then insert them in front of b without changing order.  Given several such operations and output the final status of the sequence.
Input

There will be only one test case. The test case begins with an integer N indicating the number of people.  There are several operations followed.  The format is “Move a b” (without quote) you can assume that the position of a is in front of the position of b.  The test case is terminated by “Exit” (without quote).

subtask 1 : 1<=N<=100, you can use O(N) algo for each operation.

subtask 2 : 1<=N<=100, you can use O(N) algo for each operation.

subtask 3 : 1<=N<=100000, you need use O(1) algo for each operation.

subtask 4 : 1<=N<=1000000, you need use O(1) algo for each operation.
Output

Output the numbers from the first one to the last one, and separate two consecutive numbers by a space.
