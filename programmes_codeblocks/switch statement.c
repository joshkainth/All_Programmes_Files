#include <stdio.h>
void main(){
int a;
printf("Enter the value of a (1-7) =");
scanf("%d",&a);
switch(a){
case 1:
printf("Days is Monday");
break;
case 2:
printf("Days is Tuesday");
break;
case 3:
printf("Days is Wednesday");
break;
case 4:
printf("Days is Thursday");
break;
case 5:
printf("Days is Friday");
break;
case 6:
printf("Days is Saturday");
break;
case 7:
printf("Days is Sunday");
break;
default:
printf("No Day");
break;
}
}
