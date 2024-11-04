//Create a program to search an element in a 2-D array.
#include<stdio.h>
int search(int arr[][3],int row,int cols,int element);
int main(){
    printf("welcome\n");
    int arr[3][3]={{1,2,3},{4,5,6},{4,5,9}};

    int occ=search(arr,3,3,2);
    printf("\n Search element of 2 is %d",occ);

    occ=search(arr,3,3,4);
    printf("\n Search element of 4 is %d",occ);

     occ=search(arr,3,3,5);
    printf("\n Search element of 5 is %d",occ);
    return 0;
}
int search(int arr[][3],int row,int cols,int element){
    int occ=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]==element){
                occ++;
            }
        }
    }
  return occ;
}
