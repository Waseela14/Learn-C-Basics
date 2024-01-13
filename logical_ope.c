#include <stdio.h>
int main()
{
    int outside, weather;
    printf("\n if outside 1 true 0 false:");
    scanf("%d, &outside");
    printf("\nEnter if rain 1 true 0 false:");
    scanf("%d, &weather");
    if (outside && weather ==1)
        printf("\nPlease use an umbrella.\n");
    else
        printf("\nDress normally.\n\n");
    return 0 ;    
}