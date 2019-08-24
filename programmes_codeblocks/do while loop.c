#include <stdio.h>
void main(){
int i,a,j,n,b,c;
printf("Enter The value up to which you want table = ");
scanf("%d",&b);
printf("Enter The value of which table = ");
scanf("%d",&n);
i = 0;
//b = c;
do{
        j = n*i;
    printf(" %d * %d = %d\n",n,i,j);
    i++;
}while(i<=b);
}
