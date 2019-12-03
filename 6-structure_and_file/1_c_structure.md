# C struct

In this tutorial, you'll learn about struct types in C Programming. You will learn to define and use structures with the help of examples.

In C programming, a struct (or structure) is a collection of variables (can be of different types) under a single name.

## How to define structures?

Before you can create structure variables, you need to define its data type. To define a struct, the `struct` keyword is used.

### Syntax of struct

```c
struct structureName
{
    dataType member1;
    dataType member2;
    ...
};
```

Here is an example:

```c
struct Person
{
    char name[50];
    int citNo;
    float salary;
};
```

Here, a derived type `struct Person` is defined. Now, you can create variables of this type.

## Create struct variables

When a struct type is declared, no storage or memory is allocated. To allocate memory of a given structure type and work with it, we need to create variables.

Here's how we create structure variables:

```c
struct Person
{
    char name[50];
    int citNo;
    float salary;
};

int main()
{
    struct Person person1, person2, p[20];
    return 0;
}
```

Another way of creating a struct variable is:

```c
struct Person
{
    char name[50];
    int citNo;
    float salary;
} person1, person2, p[20];
```

In both cases, two variables `person1`, `person2`, and an array variable `p` having 20 elements of type `struct Person` are created.

## Access members of a structure

There are two types of operators used for accessing members of a structure.

1. `.` - Member operator
2. `->` - Structure pointer operator (will be discussed in the next tutorial)

Suppose, you want to access the `salary` of `person2`. Here's how you can do it.

```c
person2.salary
```

Example: Add two distances

```c
// Program to add two distances (feet-inch)
#include <stdio.h>
struct Distance
{
    int feet;
    float inch;
} dist1, dist2, sum;
int main()
{
    printf("1st distance\n");
    printf("Enter feet: ");
    scanf("%d", &dist1.feet);
    printf("Enter inch: ");
    scanf("%f", &dist1.inch);
    printf("2nd distance\n");
    printf("Enter feet: ");
    scanf("%d", &dist2.feet);
    printf("Enter inch: ");
    scanf("%f", &dist2.inch);
    // adding feet
    sum.feet = dist1.feet + dist2.feet;
    // adding inches
    sum.inch = dist1.inch + dist2.inch;
    // changing to feet if inch is greater than 12
    while (sum.inch >= 12)
    {
        ++sum.feet;
        sum.inch = sum.inch - 12;
    }
    printf("Sum of distances = %d\'-%.1f\"", sum.feet, sum.inch);
    return 0;
}
```

Output

```c
1st distance
Enter feet: 12
Enter inch: 7.9
2nd distance
Enter feet: 2
Enter inch: 9.8
Sum of distances = 15'-5.7"
```

## Keyword typedef

We use the `typedef` keyword to create an alias name for data types. It is commonly used with structures to simplify the syntax of declaring variables.

This code

```c
struct Distance{
    int feet;
    float inch;
};

int main() {
    structure Distance d1, d2;
}
```

is equivalent to

```c
typedef struct Distance{
    int feet;
    float inch;
} distances;

int main() {
    distances d1, d2;
}
```

## Nested Structures

You can create structures within a structure in C programming. For example,

```c
struct complex
{
 int imag;
 float real;
};

struct number
{
   struct complex comp;
   int integers;
} num1, num2;
```

Suppose, you want to set `imag` of `num2` variable to 11. Here's how you can do it:

```c
num2.comp.imag = 11;
```

## Why structs in C?

Suppose, you want to store information about a person: his/her name, citizenship number, and salary. You can create different variables `name`, `citNo` and `salary` to store this information.

What if you need to store information of more than one person? Now, you need to create different variables for each information per person: `name1`, `citNo1`, `salary1`, `name2`, `citNo2`, `salary2`, etc.

A better approach would be to have a collection of all related information under a single name `Person` structure and use it for every person.
