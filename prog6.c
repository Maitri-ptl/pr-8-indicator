#include <stdio.h>

int main()
{
    int a, b, *p, *q, *temp;

    printf("enter value for a : ");
    scanf("%d", &a);

    printf("enter value for b : ");
    scanf("%d", &b);

    temp = &a;
    p = &b;
    q = temp;

    printf("\n before swapping : ");
    printf("\n a is : %d ", a);
    printf("\n b is : %d ", b);

    printf("\n after swapping : ");
    printf("\n a is : %d ", *p);
    printf("\n b is : %d ", *q);

    return 0;
}