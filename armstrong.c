#include<stdio.h>
int main()
{
    int num,c,r,arm=0;
    printf("enter the number:\n");
    scanf("%d",&num);
    c=num;
    while(num>0){
        r=num%10;
        arm=(r*r*r)+arm;
        num=num/10;
    }
    if(c==arm){
        printf("armstrong");
    }
    else{
        printf("not");
    }
    return 0;
}