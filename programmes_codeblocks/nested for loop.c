#include <stdio.h>
void main(){
int i=0,j,n,b;
printf("Enter The value up to which you want table = ");
scanf("%d",&b);
printf("Enter The value of which table = ");
scanf("%d",&n);
while(i<=b){
        j = n*i;
    printf(" %d * %d = %d\n",n,i,j);
    i++;
}
}
