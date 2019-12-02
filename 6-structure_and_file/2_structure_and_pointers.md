# C structs and Pointers

In this tutorial, you'll learn to use pointers to access members of structs in C programming. You will also learn to dynamically allocate memory of struct types.

Before you learn about how pointers can be used with structs, be sure to check these tutorials:

* C Pointers
* C struct

## C Pointers to struct

Here's how you can create pointers to structs.

```
struct name {
    member1;
    member2;
    .
    .
};
int main()
{
    struct name *ptr, Harry;
}
```

Here, `ptr` is a pointer to `struct`.

#### Example: Access members using Pointer

To access members of a structure using pointers, we use the `->` operator.

```
#include <stdio.h>
struct person
{
   int age;
   float weight;
};
int main()
{
    struct person *personPtr, person1;
    personPtr = &person1;   
    printf("Enter age: ");
    scanf("%d", &personPtr->age);
    printf("Enter weight: ");
    scanf("%f", &personPtr->weight);
    printf("Displaying:\n");
    printf("Age: %d\n", personPtr->age);
    printf("weight: %f", personPtr->weight);
    return 0;
}
```

In this example, the address of `person1` is stored in the `personPtr` pointer using `personPtr = &person1;`.

Now, you can access the members of `person1` using the `personPtr` pointer.

By the way,

* personPtr->age is equivalent to (*personPtr).age
* personPtr->weight is equivalent to (*personPtr).weight

## Dynamic memory allocation of structs

Before you proceed this section, we recommend you to check C dynamic memory allocation.

Sometimes, the number of struct variables you declared may be insufficient. You may need to allocate memory during run-time. Here's how you can achieve this in C programming.

#### Example: Dynamic memory allocation of structs
```
#include <stdio.h>
#include <stdlib.h>
struct person {
   int age;
   float weight;
   char name[30];
};
int main()
{
   struct person *ptr;
   int i, n;
   printf("Enter the number of persons: ");
   scanf("%d", &n);
   // allocating memory for n numbers of struct person
   ptr = (struct person*) malloc(n * sizeof(struct person));
   for(i = 0; i < n; ++i)
   {
       printf("Enter first name and age respectively: ");
       // To access members of 1st struct person,
       // ptr->name and ptr->age is used
       // To access members of 2nd struct person,
       // (ptr+1)->name and (ptr+1)->age is used
       scanf("%s %d", (ptr+i)->name, &(ptr+i)->age);
   }
   printf("Displaying Information:\n");
   for(i = 0; i < n; ++i)
       printf("Name: %s\tAge: %d\n", (ptr+i)->name, (ptr+i)->age);
   return 0;
}
```

When you run the program, the output will be:

```
Enter the number of persons:  2
Enter first name and age respectively:  Harry 24
Enter first name and age respectively:  Gary 32
Displaying Information:
Name: Harry	Age: 24
Name: Gary	Age: 32
```

In the above example, `n` number of struct variables are created where `n` is entered by the user.

To allocate the memory for `n` number of `struct person`, we used,

```
ptr = (struct person*) malloc(n * sizeof(struct person));
```

Then, we used the `ptr` pointer to access elements of `person`.