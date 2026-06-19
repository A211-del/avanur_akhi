#include<stdio.h>
int main ()
{
int num, count=0;
printf("enter a number:");
scanf("%d", &num);
while (num!=10){

count++;
num/10;

}
printf("total digits=%d\n", count);
return 0;
}
