#include <stdio.h>
int main()
{
    int speed;
    printf("\nEnter your speed as an integer:");
    scanf("%d", &speed);
    if(speed<65)
       printf("\nNo Speeding Ticket!");
    else
        printf("\nSpeeding Ticket");
    return 0;       
}