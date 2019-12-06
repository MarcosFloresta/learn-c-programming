#include <math.h>
#include <stdio.h>
int main()
{
    int low, high, i, temp1, temp2, rem, n = 0;
    float result = 0.0;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &low, &high);
    printf("Armstrong numbers between %d and %d are: ", low, high);
    for (i = low + 1; i < high; ++i)
    {
        temp2 = i;
        temp1 = i;
        // number of digits calculation
        while (temp1 != 0)
        {
            temp1 /= 10;
            ++n;
        }
        // result contains sum of nth power of its digits
        while (temp2 != 0)
        {
            rem = temp2 % 10;
            result += pow(rem, n);
            temp2 /= 10;
        }
        // check if i is equal to the sum of nth power of its digits
        if ((int)result == i)
        {
            printf("%d ", i);
        }
        // resetting the values
        n = 0;
        result = 0;
    }
    return 0;
}