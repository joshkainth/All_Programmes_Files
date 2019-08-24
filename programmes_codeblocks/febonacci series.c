#include <stdio.h>
void main(){
int a=0,b=1,c=0,i;
for(i=1;i<=10;i++){
c = a+b;
printf("%d + %d = %d\n",a,b,c);
a = b;
b = c;
}
}
