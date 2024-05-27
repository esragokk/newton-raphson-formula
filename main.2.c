#include <stdio.h>
#include <stdlib.h>

int main(){
    int a; // initialize variable to store user input
    const double EPSILON = 0.0001; // initialize a constant value for the epsilon
    double x1, x2, start, end, root; // initialize variables for interval search method
    printf("Enter a number for the interval search method:"); // ask user for input
    scanf("%d", &a); // store user input in a variable
    x1 = 0; // initialize x1 as 0
    x2 = (double) a; // initialize x2 as user input
    int i; // initialize loop counter variable
    while (x2 - x1 > EPSILON) { // check if the difference between x2 and x1 is greater than the epsilon value
        for (int i = 0; i < 10; i++) { // loop 10 times
            start = x1 + i * (x2 - x1) / 10; // calculate the start value for the current interval
            end = start + (x2 - x1) / 10; // calculate the end value for the current interval
            if (start * start >= a - EPSILON && start * start <= a + EPSILON) { // check if start squared is close enough to a
                root = start; // set root to start
                goto end; // jump to the end label
            }
            if (end * end >= a - EPSILON && end * end <= a + EPSILON) { // check if end squared is close enough to a
                root = end; // set root to end
                goto end; // jump to the end label
            }
            else if ((start * start - a) * (end * end - a) < 0) { // check if the product of the differences between start squared and a, and end squared and a is negative
                x1 = start; // set x1 to start
                x2 = end; // set x2 to end
                break; // exit the loop
            }
        } 
    }
    root = x1; // set root to x1
end:
    printf("%lf\n", root); // print the root value
    printf("Enter a number for Newton-Raphson calculation:"); // ask user for input
    scanf("%d",&a); // store user input in a variable
    double var1 = (double)a; // initialize var1 as user input converted to a double
    double var2 = 0; // initialize var2 as 0
    double result; // initialize variable for Newton-Raphson result
    while( var1 -var2 > 0.0001 || var2 -var1 > 0.0001){ // check if the difference between var1 and var2 is greater than the epsilon value
        var2 = var1; // set var2 to var1
        var1 = var1 - (var1*var1-a) / (2*var1); // perform Newton-Raphson calculation
        result = var1; // store result in a variable
    }
    if (a > 0){ // check if a is greater than 0
        printf("Result: %lf\n",result); // print the result
    }
    return 0; // exit the program
}


