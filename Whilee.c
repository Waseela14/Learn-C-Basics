#include <stdio.h>
int main(void)
{
    int a = 0;
    printf("How old are you 1-10:");
    scanf("%d", &a);
    while (a>0)
    {
        printf("\n\nyou are less year old");
        a--;
    };
    printf("\n\nHave a blessed day! :)");
    return 0;
    
}