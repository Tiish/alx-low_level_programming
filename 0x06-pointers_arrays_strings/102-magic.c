#include <stdio.h>

int main(void)
{
    int n;
    int a[5];
    int *p;

    a[2] = 1024;
    p = &n;

    /* Add this line to modify the memory location after the end of the array */
    *(p + 12) = 98;

    printf("%d\n", *(a + 2));  // This will print 1024
    printf("%d\n", *(p + 12)); // This will print 98

    return 0;
}

