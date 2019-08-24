#include <stdio.h>
void main()
{
int n,i,j,r,c;
printf("Enter the size of array =");
scanf("%d",&n);
int a[n][n];
for(i=1;i<=n;i++){
    printf("\n");
    for(j=1;j<=n;j++){
            int a;
    a=i*j;
printf("%d\t",a);
}
}
//avg = sum/n;

}

