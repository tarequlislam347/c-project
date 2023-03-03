#include <stdio.h>

int main()
{
    int i, j;
    for (i = 0; i < 10; i++)
    {
        printf("T");
    }
    printf("\n");
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (j < 4 || j > 5)
            {
                printf(" ");
            }
            else
            {
                printf("T");
            }
        }
        printf("\n");
    }

    return 0;
}
