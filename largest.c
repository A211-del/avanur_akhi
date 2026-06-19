#include<stdio.h>
int main ()
{
int a, b, c;
printf("enter three numbers:");
scanf("%d,%d,%d", &a,&b,&c);
 if (a>=b && a>=c)
 printf("largest=%d\n", a);

 else if(b>=a && b>=c)
 printf("largest=%d\n", b);

 else
 printf("largest=%d\n", c);

 return 0;
}
