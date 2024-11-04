//Create a program to merge two sorted arrays
#include<stdio.h>
void print_a(int arr[],int size);
void merge(int arr1[],int size1,int arr2[],int size2,int arr3[],int size3);
int main(){
  int  arr1[6]={1,3,6,8,10,11};
  int  arr2[7]={2,4,5,7,9,13,14};
  int arr3[13];
  merge(arr1,6,arr2,7,arr3,13);
  printf("sorted array ");
  print_a(arr3,13);
    return 0;
}
void merge(int arr1[],int size1,int arr2[],int size2,int arr3[],int size3){
    int i=0,j=0,k=0;
    while(k<size3){
if(j==size2 || i<size1 && arr1[i]<arr2[j]) {
        arr3[k]=arr1[i++];
  }else{
         arr3[k]=arr2[j++];
  }
     //if(j==size2 ) {
       // arr3[k]=arr1[i++];
    // }else if(i==size1){
   //  arr3[k]=arr2[j++];
    // }
    // else if(arr1[i]<arr2[j]){
     //    arr3[k]=arr1[i++];
   //  }else{
    //     arr3[k]=arr2[j++];
   //  }
     k++;
    }

}
void print_a(int arr[],int size){
    for(int i=0;i<size;i++){
        printf(" %d",arr[i]);
    }
}