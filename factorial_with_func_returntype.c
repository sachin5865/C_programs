#include<stdio.h>
int fact(int);
int main(){
    int num;
    printf("enter the number:\n");
    scanf("%d",&num);
    printf("%d",fact(num));
}
int fact(int n){
    int i,fact=1;
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}