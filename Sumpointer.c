#include<stdio.h>

int main()
{
    int first, second, *p , *q, sum;
    printf("Enter two integers to add using pointers:\n");
    scanf("%d%d", &first, &second);
    p = &first;
    q = &second;
    sum = *p + *q;
    printf("\n\nThe sum of the entered numbers is: %d", sum);
    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}
