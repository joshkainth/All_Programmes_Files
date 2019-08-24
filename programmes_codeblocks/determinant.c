#include<stdio.h>
#include<math.h>
void main(){
int n,i,j,determinant;
printf("Enter The Size of ARRAY = ");
scanf("%d",&n);
int a[n][n];
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        printf("Enter the value a a[%d][%d] = ",i,j);
        scanf("%d",&a[i][j]);
    }
}
printf("Elements Enter in Matrix A :");
for(i=0;i<n;i++){
        printf("\n");
    for(j=0;j<n;j++){
        printf("%d\t",a[i][j]);
    }
}
switch(n){
    case 2 : determinant = a[0][0]*a[1][1] - a[1][0]*a[0][1];
    printf("\n\nDeterminant of 2x2 matrix is : %d - %d =  %d", a[0][0]*a[1][1], a[1][0]*a[0][1], determinant);
    break;
    case 3:   determinant = a[0][0] * ((a[1][1]*a[2][2]) - (a[2][1]*a[1][2])) -a[0][1] * (a[1][0]* a[2][2] - a[2][0] * a[1][2]) + a[0][2] * (a[1][0] * a[2][1] - a[2][0] * a[1][1]);
    printf("\nDeterminant of 3X3 matrix: %d", determinant);
    break;
    default : printf("\nNo Determinant");
    break;
}
}
