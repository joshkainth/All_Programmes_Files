#include <stdio.h>
void main(){
int i,j,n,b;
printf("Enter The value up to which you want table = ");
scanf("%d",&b);
printf("Enter The value of which table = ");
scanf("%d",&n);
for(i=0;i<=b;i++){
        j = n*i;
    printf(" %d * %d = %d\n",n,i,j);
}
}
