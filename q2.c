// write a program to print all natural numbeer in reverse(from n to 1)
#include <stdio.h>


int main()
{
    int i, n;

    printf("Enter any number: ");
    scanf("%d", &n); 

    for(i=n; i>=1; i--)
    {
        printf("%d\n", i);
    }

    printf("Natural numbers from 1 to %d : \n", n);

    return 0;
}