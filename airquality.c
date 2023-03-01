#include<stdio.h>

int main()
{
    int aqi;
    printf("Enter AQI :");
    scanf("%d",&aqi);
    if(aqi>0 && aqi<=50)
    {
        printf("\nLevel of air quality is : Healthy");
    }
    else if(aqi>50 && aqi<=100)
    {
        printf("\nLevel of air quality is : Moderate");
    }
    else if(aqi>100 && aqi<=200)
    {
        printf("\nLevel of air quality is : Unhealthy");
    }
    else if(aqi>200 && aqi<=300)
    {
        printf("\nLevel of air quality is : Very Unhealthy");
    }
    else if(aqi>300 && aqi<=500)
    {
        printf("\nLevel of air quality is : Hazardous");
    }
    else
    {
        printf("\nInvalid AQI");
    }
    
    return 0;
}