#include <stdio.h>
void main(){
int a,b,sum,c,d,e,f;
printf("Enter the value of a = ");
scanf("%d",&a);
printf("Enter the value of b = ");
scanf("%d",&b);
sum = a+b;
printf("\nSum of a and b = ");
printf("%d",sum);
c = a-b;
printf("\nMinus of a and b = %d",c);
//printf("%d",c);
d = a*b;
printf("\nMultiply of a and b = ");
printf("%d",d);
e = a/b;
printf("\nDivision of a and b = ");
printf("%d",e);
f = a%b;
printf("\nModulo of a and b = ");
printf("%d",f);
}
