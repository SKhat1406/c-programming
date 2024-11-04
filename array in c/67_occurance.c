//Create a program to find number of occurrences of an element in an array
#include<stdio.h>
int occurance(int arr[],int size,int element);
int main(){
    printf("Welcome to number of occurrance number in a element\n");
    int arr[]={5,10,15,3,4,5,5,6,10,3,2};
    int result=occurance(arr,11,5);
    printf("occurance of 5 is :%d\n",result);
     result=occurance(arr,11,10);
    printf("occurance of 10 is :%d\n",result);
     result=occurance(arr,11,3);
    printf("occurance of 3 is :%d\n",result);
     result=occurance(arr,11,4);
    printf("occurance of 4 is :%d\n",result);
    result=occurance(arr,11,2);
    printf("occurance of 2 is :%d",result);
return 0;
}
int occurance(int arr[],int size,int element){
int count=0;
    for(int i=0;i<size;i++){
        if(arr[i]==element)
        count++;
    }
    return count;
}

