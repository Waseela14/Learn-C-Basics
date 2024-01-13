#include <stdio.h>
int main()
{
    int speed;
    printf("\nEnter your speed:");
    scanf("%d", &speed);
    speed = (speed <= 65)? (65): (speed <=70)? (70): (90);// here (65), (70) and (90) are used as symbols to identify case
    switch (speed)
    {
    case 65:
        printf("\nNo speed ticket\n\n");
        break;
    case 70:
        printf("\nSpeeding ticket\n\n");
        break;
    case 90:
        printf("\n Expensive speeding ticket\n\n");
        break;      
    
    default:
        printf("\nIncorrect speed\n\n");
        break;
    }
    return 0;
}