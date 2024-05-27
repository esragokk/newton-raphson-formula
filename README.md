# newton-raphson-formula
## Execution:
-  For execution, gcc compiler must be installed on your computer.
-  Then you can execute the code with the following command:
    **gcc main.2.c**

## Description:
C code that provides finding square root of a number by not using math.h library

Part1) Implement the interval search method in C. Read a positive integer a from the user of which square
root we would like to find. Take the initial interval as (0, a) and divide this interval into ten equal size
sections at each iteration. Repeat this search until the root is found or the difference between x1 and x2
becomes less than 0.0001. Print the resulting value of the root (if one is found) or the value of x1 if the
root cannot be found precisely.


Hint: You need to check each section to see if the root resides within that section by evaluating f(x) at the
section boundaries and looking at the signs of the evaluations. If the section contains the root, then divide
the section into ten new sections and repeat the process.


Part2) Implement the Newton-Raphson formula in C. Read a positive integer a from the user of which
square root we would like to find. Start with the initial estimate of the root as a (i.e., xi = a) and apply the
formula in (1) to find the following estimate of the root at each iteration. Repeat the iterations until the
difference between the current estimate and the previous estimate of the root becomes less than 0.0001.
Print the resulting value of the root (if one is found) or the value of x1 if the root cannot be found exactly.
