# C Standard Library Functions

In this tutorial, you'll learn about the standard library functions in C. More specifically, what are they, different library functions in C and how to use them in your program.

C Standard library functions or simply C Library functions are inbuilt functions in C programming.

The prototype and data definitions of these functions are present in their respective header files. To use these functions we need to include the header file in our program. For example,

If you want to use the `printf()` function, the header file `<stdio.h>` should be included.

```
#include <stdio.h>
int main()
{
   printf("Catch me if you can."); 
}
```

If you try to use `printf()` without including the `stdio.h` header file, you will get an error.

## Advantages of Using C library functions

1. They work

One of the most important reasons you should use library functions is simply because they work. These functions have gone through multiple rigorous testing and are easy to use.

2. The functions are optimized for performance

Since, the functions are "standard library" functions, a dedicated group of developers constantly make them better. In the process, they are able to create the most efficient code optimized for maximum performance.

3. It saves considerable development time

Since the general functions like printing to a screen, calculating the square root, and many more are already written. You shouldn't worry about creating them once again.

4. The functions are portable

With ever-changing real-world needs, your application is expected to work every time, everywhere. And, these library functions help you in that they do the same thing on every computer.

#### Example: Square root using sqrt() function

Suppose, you want to find the square root of a number.

To can compute the square root of a number, you can use the `sqrt()` library function. The function is defined in the `math.h` header file.

```
#include <stdio.h>
#include <math.h>
int main()
{
   float num, root;
   printf("Enter a number: ");
   scanf("%f", &num);
   // Computes the square root of num and stores in root.
   root = sqrt(num);
   printf("Square root of %.2f = %.2f", num, root);
   return 0;
}
```

When you run the program, the output will be:

```
Enter a number: 12
Square root of 12.00 = 3.46
```

## Library Functions in Different Header Files

| C Header Files | |
| --- | --- |
| <assert.h> | Program assertion functions |
| <ctype.h> | Character type functions |
| <locale.h> | Localization functions |
| <math.h> | Mathematics functions |
| <setjmp.h> | Jump functions |
| <signal.h> | Signal handling functions |
| <stdarg.h> | Variable arguments handling functions |
| <stdio.h> | Standard Input/Output functions |
| <stdlib.h> | Standard Utility functions |
| <string.h> | String handling functions |
| <time.h> | Date time functions |
