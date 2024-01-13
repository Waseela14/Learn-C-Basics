#include<stdio.h>
int main(void)
{
    short sh_a=5;
    int nor_a=67;
    unsigned uns_a=67u;
    long lng_a = 67l;
    printf("sh_a = %hd, divide by int 2 is %d\n", sh_a, sh_a/2);
    printf("sh_a = %hd, divide by float 2 is %d\n", sh_a, sh_a/2.0);
    printf("67 as char is %c\n", nor_a);
    printf("size in bytes of short, int, unsigned, and long on my machine:");
    printf("%lu, %lu, %lu, %lu\n", sizeof(sh_a), sizeof(nor_a), sizeof(uns_a), sizeof(lng_a));
    return 0;
}