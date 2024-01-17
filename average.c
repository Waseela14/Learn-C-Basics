#include<stdio.h>
int main(void)
{
    int a=5, b=6, c=7;
    double average=0.0;

    average = (a+b+c)/3.0;
    printf("The average of a=%d, b=%d and c=%d is %f", a,b,c,average);
    return 0;
}