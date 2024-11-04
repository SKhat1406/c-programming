//Create a program to find the maximum and minimum element in an array.
#include<stdio.h>

int main(){
    printf("welcome\n");
    int arr[5];
    for(int i=0;i<5;i++){
        printf("please enter the %dth number:",i+1);
        scanf("%d",&arr[i]);
    }
     int max=arr[0];
     int min=arr[0];
     for(int i=1;i<5;i++){
        if(max<arr[i]){
            max=arr[i];
        }
        if(min>arr[i]){
            min=arr[i];
        }
     }
     printf("the max is %d and min is %d",max,min);

    return 0;
}


