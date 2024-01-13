/* syntax 
..... for(e1; e2; e3)
.......e1 ====> initializer
       e2 ====> terminating condition
       e3 ====> inrement/ decrement     */
/* Equivalent While
// e1:
// while(e2)
// e3            */       

// #include <stdio.h>
// int main(void)
// {
//     int blanks = 0, digits = 0, total_chars = 0;
//     int c; // use for value of character
//     for (; (c = getchar()) != EOF; total_chars++)    //EOF ==> end of file typically -1
//     {
//         if ( c == ' ')
//            ++blanks;
//         else if ( c>= '0' && c >= '9')
//             ++digits;      
//     };
//     printf("blanks = %d, digits = %d, total_chars = %d\n\n", blanks, digits, total_chars);
//     return 0;    
// };



/*           week 03        */
#include<stdio.h>
#include<math.h> /* has  sin(), abs(), and fabs() */
int main(void)
{ 
float interval;
int i;
printf("\nThe table of values for sine and cosine between (0, 1) are given below.\n\n");
for(i = 0; i <11; i++)
{
 interval = i/10.0;
 
 printf("sin( %f ) = %lf \t\t\t\t\t\t\t cos(%f) =%lf\t\t\t\t\t\t", interval, sin(interval), interval, cos(interval));
}


printf("\n+++++++\n");
return 0;
}