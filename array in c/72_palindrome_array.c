//Create a program to check is the array is palindrome or not.
#include<stdio.h>
int is_palindrome(int arr[],int size);
int main(){
    int size;
    int arr[]={5,4,3,4,5};
    int arr2[]={5,6,1,4,1,4};
    
  printf("\nthe give array %d", is_palindrome(arr,5));
 
  printf("\nthe give array %d", is_palindrome(arr2,6));
 
    return 0;
}
int is_palindrome(int arr[],int size){
   for(int i=0;i<size/2;i++){
     if(arr[i]==arr[size-1-i]){
         return 1;
        }else{
      return 0;
        }
}
}