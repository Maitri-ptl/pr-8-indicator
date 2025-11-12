
#include <stdio.h>

int main()
{
    char str[20];

    printf("Enter any string:");
    gets(str);

    int length = 0, *p;
    p = &length;

    for (int i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    printf("The length is: %d", *p);

    return 0;
}
