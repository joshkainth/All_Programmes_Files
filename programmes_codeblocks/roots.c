#include<stdio.h>
void main(){
int a,b,c,d,x;
printf("Enter the coefficients of X^2 : ");
scanf("%d",&a);
printf("Enter the coefficients of X : ");
scanf("%d",&b);
printf("Enter the constant : ");
scanf("%d",&c);
printf("So equations becomes :-  %d X^2 + %d X + %d\n",a,b,c);
d = b*b - 4*a*c;
printf("D = %d\n",d);
if(d>0)
    printf("Roots are reals and distinct");
else if(d<0)
    printf("Roots are imaginary");
else
    printf("Roots are same");
}
