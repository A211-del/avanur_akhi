#include<stdio.h>
int main(){
int choice;
float V, I, R;
printf("1. V= I*R\n");
printf("2. I= V/R\n");
printf("3. R= V/ I\n");

printf("Choose an equation:  ");
scanf("%d", &choice);

switch (choice) {
case 1:
    printf("Enter I and R: ");
    scanf("%f %f", &I, &R);
    V= I*R;
    printf("Voltage = %.2f V\n", V);
    break;

case 2:
    printf("Enter V and R:  ");
    scanf("%f %f", &V, &R);
    if(R !=0)
        printf("Current = %.2f A\n", V/R);
    else
        printf("Error .\n");
    break;

case 3:
    printf("Enter V and I:  ");
    scanf("%f %f", &V, &I);
    if(I !=0)
        printf("Resistance = %.2f Ohm\n", V/I);
    else
        printf("Error .\n");
    break;

default:
    printf("Invalid choice!\n");

}
return 0;
}
