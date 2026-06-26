#include<stdio.h>
int main ()
{

 int a=7;
 int result;
 //'a' becomes 6 first, then 'result' gets the new value (6)
 result= --a;
 printf("result: %d\n", result);
//output: 6
printf("value of a:%d\n", a); // output:6
return 0;

}
