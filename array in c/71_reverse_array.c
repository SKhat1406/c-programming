//Create a program to reverse an array.
#include<stdio.h>
void print_a(int arr[],int size);
void reverse(int arr[],int size);
void swap(int *n1,int *n2);
int main(){
    int arr[]={5,4,3,2,1};
    int arr1[]={6,8,2,6,5,7};
    printf("welcome\n");
    reverse(arr,5);
    printf("reverse of array is ");
    print_a(arr,5);
  
  reverse(arr1,6);
    printf("\nreverse of array is ");
    print_a(arr1,6);
}
void reverse(int arr[],int size){
    for(int i=0;i<size/2;i++){
      swap(&arr[i],&arr[size-1-i]);
    }
}
void swap(int *n1,int *n2){
    int temp=*n1;
    *n1=*n2;
    *n2=temp;
}
void print_a(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}