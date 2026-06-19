#include<stdio.h>
int main()
{
int num, reserve=0, remainder;
printf("enter a number:");
scanf("%d", &num);
while(num!=0){
remainder=num%10;
reserve=reserve*10+remainder;
num/=10;

}
printf("reserved number=%d\n", reserve);
return 0;

}
