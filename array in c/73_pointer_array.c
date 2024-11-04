//Write a function that uses pointer arithmetic to copy an array of char into another.
#include<stdio.h>
void print_a(char arr[],int size);
void copy(char *arr,int size,char *new_arr);
int main(){
    char arr[5]={'s','u','n','n','y'};
    char new_arr[5];
  
    printf("\noringinal  array is ");
      print_a(arr,5);
    copy(arr,5,new_arr);
    printf("\ncopy array is ");
    print_a(new_arr,5);
    return 0;
}

    void copy(char *arr,int size,char *new_arr){
        for(int i=0;i<size;i++){
           * new_arr=*arr;
            new_arr++;
            arr++;
            //*(new_arr+i)=*(arr+i);
        }
    }
    void print_a(char arr[],int size){
    for(int i=0;i<size;i++){
        printf("%c ",arr[i]);
    }
    }