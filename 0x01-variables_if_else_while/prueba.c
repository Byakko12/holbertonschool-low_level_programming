#include <stdio.h>

int main(void)
{
    int i, j;

    for (i = 0; i <= 5; i++)
    {
        for (j = 0; j <= 5; j++)
        {
            if (i < j)
            {
                printf("%d %d\n", i, j);
            }


        }
    }
    return(0);
}