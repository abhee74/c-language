//write a program to find sum of all even number between 1 to n
#include<stdio.h>

int main()
{
    int i, num, sum = 0;

    printf("\n Enter the Number = ");
    scanf("%d", &num);

    printf("Even numbers from 1 To %d are:\n", num);
    for(i = 1; i <= num; i++)
    {
        if(i % 2 == 1)
        {
            printf("%d\n", i);
            sum = sum + i;
        }

    }

    printf("Sum of odd numbers from 1 To %d is %d\n", num, sum);

    return 0;
}
