#include <stdio.h>
int main() 
{
    int ArraySize = 10;
    int a [ArraySize];
    int count;

    //populate an array
    for (count = 0; count < ArraySize; count++)
    {
        a[count] = count;
    }

    printf("The first and second elements are %d and %d\n",a[0], a[1]);
    printf ("Or, via pointers, %d and %d\n", *a, *(a+1));

    return (0);
}