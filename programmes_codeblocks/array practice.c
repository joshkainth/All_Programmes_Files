#include <stdio.h>
void main(){
int n,i,j;
printf("Enter The Size of ARRAY = ");
scanf("%d",&n);
int a[n][n], b[n][n],c[n][n]=0;
for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
        printf("Enter the value a a[%d][%d] = ",i,j);
        scanf("%d",&a[i][j]);
    }
}
for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
        printf("Enter the value a b[%d][%d] = ",i,j);
        scanf("%d",&b[i][j]);
    }
}
printf("Elements Enter in Matrix A :");
for(i=1;i<=n;i++){
        printf("\n");
    for(j=1;j<=n;j++){
        printf("%d\t",a[i][j]);
    }
}
printf("\nElements Enter in Matrix B :");
for(i=1;i<=n;i++){
        printf("\n");
    for(j=1;j<=n;j++){
        printf("%d\t",b[i][j]);
    }
}
printf("\nMultiplication of Two Matrix A and B :");
for(i=1;i<=n;i++){
        printf("\n");
    for(j=1;j<=n;j++){
        c[i][j] += a[i][j]*b[j][i];
        printf("%d\t",c[i][j]);
    }
}
printf("\nTranspose of matrix :");
for(i=1;i<=n;i++){
        printf("\n");
    for(j=1;j<=n;j++){
        printf("%d\t",c[j][i]);
    }
}
}
