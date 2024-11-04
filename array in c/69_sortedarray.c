//Create a program to check if the given array is sorted.
#include<stdio.h>
int is_sorted(int arr[],int size);
int main(){
     printf("welcome\n");
    int arr[5];
    for(int i=0;i<5;i++){
        printf("please enter the %dth number:",i+1);
        scanf("%d",&arr[i]);
    }
    if(is_sorted(arr,5)){
       printf("the array is sorted");
    }else{
         printf("the array is not sorted");
    }
    return 0;
}
int is_sorted(int arr[],int size){
    int increase=1;
    int decrease=1;
    for(int i=1;i<size;i++){
        if(arr[i]>arr[i-1]){
            decrease=0;
        }else if(arr[i]<arr[i-1]){
            increase=0;
        }
    }

    return decrease || increase;
}