//Create a program to do sum and average of all elements in a 2-array.
#include<stdio.h>
int sum_average(int arr[][4],int row,int cols);
int main(){
    printf("welcome to sum of array\n");
    int arr[4][4]={{4,4,4,4},{5,5,5,5},{6,6,6,6},{7,7,7,7}};
    int add=sum_average(arr,4,4);
    float average=add / 16.0;
    printf("the sum and the average of an array are :%d  & %f",add,average);
    return 0;
}
int sum_average(int arr[][4],int row,int cols){
    int sum=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<cols;j++){
        sum=sum+arr[i][j];
}
    }
    return sum;
}