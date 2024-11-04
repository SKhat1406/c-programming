//Create a program that converts a large number of kilometers to miles, using long or long long to store the distance.
#include<stdio.h>
//#define float mile=0.621371; cant able to use this constant value.
int main(){
    const float mile= 0.621371;
    long kilometers;
    printf("Welcome to km to miles converter\n");
    printf("enter the number want to convert into miles:");
    scanf("%ld", &kilometers);
 
     long long kms = kilometers * mile;
    printf("%ld is converted to miles %ld",kilometers,kms);

return 0;

}