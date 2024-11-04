//Create a program to return a new array deleting a specific element.
#include<stdio.h>

void delete(int arr[],int size,int new_arr[],int *new_size,int element);
void print_a(int arr[],int size);
int main(){
    printf("welcome\n");
    int arr[5]={25, 6, 5, 8, 4};
    int new_arr[5];
    int new_size;
    delete(arr, 5, new_arr, &new_size, 5);
    printf("\nafter delete 5 is:");
    print_a(new_arr,new_size);

    delete(arr,5,new_arr,&new_size,25);
    printf("\nafter delete 25 is:");
    print_a(new_arr,new_size);

    delete(arr,5,new_arr,&new_size,10);
    printf("\nafter delete 10 is:");
    print_a(new_arr , new_size);
   

}
void print_a(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}
void delete(int arr[],int size,int new_arr[],int *new_size,int element){
    int j=0;
    for(int i=0;i<size;i++){
   if(arr[i]!=element){
    new_arr[j]=arr[i];
    j++;
   }
    }
   *new_size=j;
}

