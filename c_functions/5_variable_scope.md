# C Storage Class

In this tutorial, you will learn about scope and lifetime of local and global variables. Also, you will learn about static and register variables.

Every variable in C programming has two properties: type and storage class.

Type refers to the data type of a variable. And, storage class determines the scope, visibility and lifetime of a variable.

There are 4 types of storage class:

* automatic
* external
* static
* register

## Local Variable

The variables declared inside a block are automatic or local variables. The local variables exist only inside the block in which it is declared.

Let's take an example.

```
#include <stdio.h>
int main(void) {
  
  for (int i = 0; i < 5; ++i) {
     printf("C programming");
  }
  
 // Error: i is not declared at this point
  printf("%d", i);  
  return 0;
}
```

When you run the above program, you will get an error undeclared identifier i. It's because `i` is declared inside the `for` loop block. Outside of the block, it's undeclared.

Let's take another example.

```
int main() {
    int n1; // n1 is a local variable to main()
}
void func() {
   int n2;  // n2 is a local variable to func()
}
```

In the above example, `n1` is local to `main()` and `n2` is local to `func()`.

This means you cannot access the `n1` variable inside `func()` as it only exists inside `main()`. Similarly, you cannot access the `n2` variable inside `main()` as it only exists inside `func()`.

##  Global Variable

Variables that are declared outside of all functions are known as external or global variables. They are accessible from any function inside the program.

Example 1: Global Variable
```
#include <stdio.h>
void display();
int n = 5;  // global variable
int main()
{
    ++n;     
    display();
    return 0;
}
void display()
{
    ++n;   
    printf("n = %d", n);
}
```
Output
```
n = 7
```

Suppose, a global variable is declared in `file1`. If you try to use that variable in a different file `file2`, the compiler will complain. To solve this problem, keyword `extern` is used in `file2` to indicate that the external variable is declared in another file.

## Register Variable

The `register` keyword is used to declare register variables. Register variables were supposed to be faster than local variables.

However, modern compilers are very good at code optimization, and there is a rare chance that using register variables will make your program faster.

Unless you are working on embedded systems where you know how to optimize code for the given application, there is no use of register variables.

## Static Variable

A static variable is declared by using the static keyword. For example;

```
static int i;
```

The value of a static variable persists until the end of the program.

Example 2: Static Variable
```
#include <stdio.h>
void display();
int main()
{
    display();
    display();
}
void display()
{
    static int c = 1;
    c += 5;
    printf("%d  ",c);
}
```
Output
```
6 11
```

During the first function call, the value of `c` is initialized to 1. Its value is increased by 5. Now, the value of `c` is 6, which is printed on the screen.

During the second function call, `c` is not initialized to 1 again. It's because `c` is a static variable. The value `c` is increased by 5. Now, its value will be 11, which is printed on the screen.