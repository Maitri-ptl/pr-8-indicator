#include<stdio.h>

int main()
{
    int a;
    int *p = &a;
    int **p1 = &p;
    int ***p2 = &p1;

    printf("Enter the value of a: ");
    scanf("%d",&a);

    printf("\n a is: %d",a);
    printf("\n p is: %d",*p);
    printf("\n p1 is: %d",**p1);
    printf("\n p2 is: %d",***p2);

    return 0;
}