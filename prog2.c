
#include <stdio.h>

void cube(int size)
{
    int *p[size][size];
    int arr[size][size];

    printf("Elements of arrays:- ");
    printf("\n");

    for ( int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            p[i][j] = &arr[i][j];
        }
    }
    
    printf("Cube of values is: ");
    printf("\n");
    
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {

            printf("%d ", *p[i][j] * *p[i][j] * *p[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int size;
    printf("Enter your size: ");
    scanf("%d", &size);
    cube(size);
    return 0;
}
