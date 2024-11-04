//Create a program to find the sum of two diagonal elements.
#include<stdio.h>
int const SIZE=3;
void sum_diagonal(int arr[][SIZE]);
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{1,2,3}};
    sum_diagonal(arr);
    return 0;
}
void  sum_diagonal(int arr[][SIZE]){
    int left=0;
    int right=0;
    for(int i=0;i<SIZE;i++){
        left+=arr[i][i];
        right+=arr[i][SIZE-1-i];
    }
printf("\n the sume of an array left %d",left);
printf("\n the sume of an array right %d",right);
 int total = left + right;
 if(SIZE%2==1){
    int index=SIZE/2;
    total -=arr[index][index];
 }
 printf("\ntotal sum of two diagonals is %d",total);
}