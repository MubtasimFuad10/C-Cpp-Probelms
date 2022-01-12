#include <stdio.h>



                            ///***Star Pattern***\\\


/// Half pyramid of * or triangle star
int main()
{
    int i, j, n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {

        for (j = 1; j <= i; j++)
        {
            printf("*");
            printf("%d ", j);      // Natural numbers
            printf("%d ", i);      // same numbers
            printf("%c ", 64 + j); // A, A B ,A B C
        }
        printf("\n");
    }
}

/// Mirror Half pyramid of *

int main()
{
    int i, j, n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {

        for (j = 1; j <= n - i; j++)
            printf(" ");

        for (j = 1; j <= i; j++)
        {
            printf("*");
            // printf("%d ", j);//Natural numbers
            // printf("%d ", i);//same numbers
            // printf("%c ", 64+j);//A, A B ,A B C
        }
        printf("\n");
    }
}

///(IMP)Inverted half pyramid of *
int main()
{
    int i, j, n;
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

/// Half pyramid of Alphabets:

int main()
{
    int i, j;
    char input, alphabet = 'A';

    scanf("%c", &input);
    for (i = 1; i <= (input - 'A' + 1); ++i)
    {
        for (j = 1; j <= i; ++j)
        {
            printf("%c ", alphabet);
        }
        ++alphabet;
        printf("\n");
    }
    return 0;
}

/// Full pyramid of *
int main()
{
    int i, j, n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= 2 * n - 1; j++) // 2n-1 column lagbe
        {
            if (j >= n - (i - 1) && j <= n + (i - 1))
            {
                // printf("*");
                // printf("%d",i);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}



/// Floyd's Triangle:
int main()
{
    int i, j, num = 1;
    int n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            // printf("%d ", j); //output: 1, 1 2, 1 2 3 , 1 2 3 4, 1 2 3 4
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}



/// Pascal Triangle:

int main()
{
    int rows, coef = 1, space, i, j;

    scanf("%d", &rows);
    for (i = 0; i < rows; i++)
    {
        for (space = 1; space <= rows - i; space++)
            printf("  ");
        for (j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef * (i - j + 1) / j;
            printf("%4d", coef);
        }
        printf("\n");
    }
    return 0;
}