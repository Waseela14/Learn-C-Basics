#include <stdio.h>
int main(void)
{
    int a = 5, b=7, c=0, d=0;   //initialize values
    c=a-b;
    printf("the difference of %d and %d is %d\n\n", a,b,c);
    c=b-a;
    printf("the difference of %d and %d is %d\n\n", b,a,c);
    c = a / b;   
    d = b/a;
    printf("the division of %d and %d is %d\n\nthe division of %d and %d is %d\n\n", a,b,c,b,a,d);
    c = a%b;
    d = b%a;
    printf("a = %d, b=%d, c = %d, d = %d\n\n", a,b,c,d);
    c = -a-b;
    d = -b-a;
    printf("a = %d, b=%d, c = %d, d = %d\n\n", a,b,c,d);

    c = ++a + b++;
    d += 5;
    printf("a = %d, b=%d, c = %d, d = %d\n\n", a,b,c,d);

    return 0;


}