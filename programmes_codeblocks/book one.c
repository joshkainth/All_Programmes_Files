#include <stdio.h>
void main(){
int i=0,j=1,n,b;
/*printf("Enter The value up to which you want table = ");
scanf("%d",&b);
printf("Enter The value of which table = ");
scanf("%d",&n);*/
do{
        i = i+j*j;
    //printf(" %d * %d = %d\n",n,i,j);
    printf("%d",i);
    i++;
}while(i<=10);
}
