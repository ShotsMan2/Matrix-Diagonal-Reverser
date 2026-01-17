#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, j, n, matris[99][99], sum, k, solkosegen[99], sagkosegen[99];

    srand(time(NULL));

    printf("n i giriniz: ");
    scanf("%d", &n);

    sum = 2;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {

            matris[i][j] = rand() % 11;
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j || i + j == n - 1)
            {
                printf("%4d", matris[i][j]);
            }
            else
            {
                printf("    ");
            }
        }
        printf("\n");
    }

    for (i = 0; i < n; i++)
    {
        solkosegen[i] = matris[i][i];
        sagkosegen[i] = matris[i][n - 1 - i];
    }
    for (i = 0; i < n; i++)
    {
        matris[i][i] = sagkosegen[n - 1 - i];
        matris[i][n - 1 - i] = solkosegen[n - 1 - i];
    }
    printf("\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j || i + j == n - 1)
            {
                printf("%4d", matris[i][j]);
            }
            else
            {
                printf("    ");
            }
        }
        printf("\n");
    }
}
