//Write a C program that initializes an unsigned int to its maximum possible value and an int to a negative number. Add 1 to both, and print the results to show how the unsigned int wraps around to 0, whereas the int remains negative due to overflow
#include<stdio.h>
#include<limits.h>
int main(){
     unsigned int positive_num=UINT_MAX;
     int normal=INT_MAX;
     printf("%u\n",positive_num);
     printf("%d\n",normal);

     positive_num++;
     normal++;
      printf("%u\n",positive_num);
     printf("%d",normal);
    return 0;
}