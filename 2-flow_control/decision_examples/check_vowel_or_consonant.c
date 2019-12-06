#include <stdio.h>
int main()
{
    char c;
    int lowercase, uppercase;
    printf("Enter an alphabet: ");
    scanf("%c", &c);
    // evaluates to 1 if variable c is lowercase
    lowercase = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    // evaluates to 1 if variable c is uppercase
    uppercase = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    // evaluates to 1 if c is either lowercase or uppercase
    if (lowercase || uppercase)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    return 0;
}