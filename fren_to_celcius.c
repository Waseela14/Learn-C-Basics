#include<stdio.h>
int main(void)
{
    int farenhiet, celcius;

    printf("Please enter the farenheit as an integer:");
    scanf("%d", &farenhiet);
    celcius = (farenhiet - 32)/1.8; //formula
    printf("\nThe given farenheit %d is equal to %d celcius", farenhiet, celcius);
    return 0;
}