# Fibonacci
A program demonstrating different ways of programming the Fibonacci Sequence

There are three functions in this program. 

fibonacci() is the simplest of the three and is our basic implementation using recursion.

fibonacciAddition() would be our "brute force" method, as it uses one long for-loop to calculate each individual term of the sequence.

dynamic_fib() uses an array to store past values of the sequence to calculate succeeding terms.


In the main program, we see first see that our simple fibonacci() takes exponentially greater time as we proceed past the 30th term. Though the implementation was simple and intuitive, it has certain limitations. However, fibonacciAddition() and dynamic_fib() are great alternatives, as they reach the space limitation of the unsigned long long without taking significantly increased run-times.
Overall, this exercise is a good precursor to introducing the topic of Big-O notation.
