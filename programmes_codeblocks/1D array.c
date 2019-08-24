#include <stdio.h>
void main(){
int n,i, sum=0;
float avg;
printf("Enter the size of array =");
scanf("%d",&n);
int a[n];

for(i=0;i<n;i++){
printf("Enter the values in array at a[%d] =",i);
scanf("%d",&a[i]);
sum = sum+a[i];
}
avg = sum/n;
printf("average sum of number = %f",avg);
}
