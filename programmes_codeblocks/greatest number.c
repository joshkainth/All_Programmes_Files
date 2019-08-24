#include <stdio.h>
void main(){
int a,b,c;
printf("enter the first number=");
scanf("%d",&a);
printf("enter the second number=");
scanf("%d",&b);
printf("enter the third number=");
scanf("%d",&c);
if(a>b && a>c)
printf("first number is greater");
else if(b>c)
    printf("second number is greater");
else
    printf("third number is greater");
}
