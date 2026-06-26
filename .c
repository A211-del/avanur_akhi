#include<stdio.h>
int main ()
{
 int a=13;
 int result;
  //'result' gets the current value (5), 'a' becomes 6
  result= a++;
  printf("result:%d\n, result"); //output:5
  printf("value of a: %d\n", a); //output:6
  return 0;

}
