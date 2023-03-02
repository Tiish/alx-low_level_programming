#include <stdio.h>

int main()
{
    int a[] = { 5, 15, 98, 12, 123 };
    int *p = a;

    printf("a[2] = %d\n", *(p + 2)); // Adding this line to print a[2] = 98

    return 0;
}

