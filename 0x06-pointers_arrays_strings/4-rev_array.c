#include "main.h"

void reverse_array(int *a, int n)
{
    int i = 0, j = n - 1;
    int b[1024];
    

    for (; i < n; i++)
    {
        b[i] = a[i];
    }
    for (i = 0;i < n; j--)
    {
        a[i++] = b[j];
    }
    
}