#include <stdio.h>
void main()
{
int n,i,j,k,l;
printf("Enter the size of array =");
scanf("%d",&n);
int a[n][n];
for(i=1;i<=n;i++){
    printf("\n");
    for(j=1;j<=n;j++){
      printf("\n");
        for(k=1;k<=n;k++){
            printf("\n");
        for(l=1;l<=n;l++){
            int a;
           a=i*j;
        printf("%d\t",a);
            }
            }
        }
    }
}

