//Write a program to demonstrate the difference in range between long and long long by calculating the factorial of 20.
#include<stdio.h>
long long factorial(int);
int main(){
int a;

//long long fact=1;
//long long b;
printf("enter the number :");
scanf("%d",&a);
/*for(int i=1;i<=a;i++){

 fact=fact*i;


}printf("%lld",fact);*/
long long result=factorial(a);
printf("%lld",result);
return 0;

}
long long factorial(int num){
    if(num<=0){
        return 1;
    }
    return num * factorial(num-1);
}