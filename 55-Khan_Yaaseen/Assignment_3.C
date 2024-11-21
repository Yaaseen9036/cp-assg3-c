//WAP to swap two numbers with the help of a temporary number in C programming 

#include <stdio.h>

int main()
{
    int n1, n2, temp;

    printf("Enter the first number: ");
    scanf("%d", &n1);

    printf("Enter the second number: ");
    scanf("%d", &n2);

    printf("\nBefore swapping: \n");
    printf("n1 = %d, n2 = %d\n", n1, n2);

    temp = n1;
    n1 = n2;
    n2 = temp;

    printf("\nAfter swapping: \n");
    printf("n1 = %d, n2 = %d\n", n1, n2);

    return 0;
}
