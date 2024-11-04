// Create a program to find the sum and average of all elements in an array.
/*#include<stdio.h>
int main(){
    int arr[5];                                                                #method 1
    for(int i=0;i<5;i++){
        printf("enter the number:");
        scanf("%d",&arr[i]);
    }
    int sum=arr[0]+arr[1]+arr[2]+arr[3]+arr[4];
    int average = sum /5;
    printf("sum of an array is :%d and average is: %d",sum,average);
    return 0;

}*/
#include<stdio.h>
int sum_average(int arr[],int count);
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        printf("enter the number:");
        scanf("%d",&arr[i]);
       }
       int sum=sum_average(arr,5);
       float average=sum/5.0;                                                                 //method 2
        printf("sum of an array is :%d and average is: %f", sum,average);
        return 0;
}
int sum_average(int arr[],int count){
    int sum=0;
    for(int i=0;i<count;i++){
    sum=sum+arr[i];
   
    }
    return sum;
}