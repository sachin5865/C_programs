#include<stdio.h>
void fact(int num);
void fact(num){
    int fact=1;
    for(int i=1;i<=num;i++){
        fact=fact*i;
    }
    printf("%d",fact);
}
int main(){
    int num;
    printf("enter the number:\n");
    scanf("%d",&num);
    fact(num);
}