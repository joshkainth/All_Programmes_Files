#include <stdio.h>
void main(){
int n, i;
printf("Enter the Size of Array = ");
scanf("%d",&n);
int chr[n];
for(i=0;i<n;i++){
    int a = chr[i];
    printf("ACII value of character = %c\n",a);
}
}
