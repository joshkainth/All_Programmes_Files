#include <stdio.h>
#include <string.h>
void main(){
char a[20], b[20], c[20];
printf("Enter First String = ");
scanf("%s",&a);
printf("Enter Second String = ");
scanf("%s",&b);
printf("Enter Third String = ");
scanf("%s",&c);
printf("-------------------------\n");
printf("String Length Function\n");
printf("-------------------------\n");
printf("length of a = %d\n",strlen(a));
printf("length of a = %d\n",strlen(b));
printf("length of a = %d\n",strlen(c));
printf("-------------------------\n");
printf("String Copy Function\n");
printf("-------------------------\n");
strcpy(b,a);
strcpy(c,"well");
puts(b);
puts(c);
printf("-------------------------\n");
printf("String Compare Function\n");
printf("-------------------------\n");
int r1;
char a1[] = "abcd";
char b1[] = "abCd";
char c1[] = "abcd";
r1 = strcmp(a1,b1);
printf("strcmp(a1,b1) = %d\n",r1);
r1 = strcmp(a1,c1);
printf("strcmp(a1,c1) = %d\n",r1);
printf("-------------------------\n");
printf("String Cat Function\n");
printf("-------------------------\n");
strcat(a,b);
puts(a);
puts(b);
}
