#include<stdio.h>
int main()
{
    int a,b,x,sum=0;
    printf("Enter the number of value :\n");
    scanf("%d",&a);
    b=a;
    while(a!=0){
        x=a%10;
        sum=sum+(x*x*x);
        x=x/10;
    }
    if(sum==b){
        printf("%d This is Armstrong number\n",a);
    }else{
        printf("%d This is not Armstrong number\n",a);
    }
}
