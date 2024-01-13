/* this is cooment*/
#include <stdio.h>
/*void is key word means "No argument"
int means "program returns a integer value"*/
int main(void)
{
    int miles = 26, yards = 385;
    double kilometers;

    kilometers = 1.609 * (miles + yards /1760.0);
    printf("\nA marathon is %lf kilometers.\n\n", kilometers);
    return 0;
}