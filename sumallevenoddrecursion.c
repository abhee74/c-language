// wap to sum of all even and odd by using recurrsion function
#include <stdio.h>

int sumOfEvenOdd(int start,int end);

int main()
{
    int start,end,sum;
    printf("enter lower limit : ");
    scanf("%d", &start);
    printf("enter upper limit : ");
    scanf("%d", &end);

    printf("sum of even /odd numbers between %d to %d = %d\n",start,end, sumOfEvenOdd(start,end));
    return 0;
}

int sumOfEvenOdd(int start,int end)
{
    if(start > end)
        return 0;
    else
        return(start + sumOfEvenOdd(start + 2, end));
    
}
