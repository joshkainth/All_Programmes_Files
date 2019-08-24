#include<stdio.h>
struct books
{
string title[50];
string author[50];
string subject[50];
int book_id;
};
void printing();
int main(){
struct books book1;
int n,i;
/*printf("Total Numbers of Entries : ");
scanf("%d",&n);
for(i=0;i<n;i++){*/
printf("Enter The Title of Book : ");
scanf("%s",&book1.title);
printf("Enter The Author of Book : ");
scanf("%s",&book1.author);
printf("Enter The Subject : ");
scanf("%s",&book1.subject);
printf("Enter The Book ID : ");
scanf("%d",&book1.book_id);
printf("Title : %c",book1.title);
printf("Author : %c",book1.author);
printf("Subject : %c",book1.subject);
printf("Book id : %d",book1.book_id);

//printing();
}
//void printing(){
/*for(i=0;i<n;i++){
printf("\n");
for(j=0;j<n;j++){*/
//return printing;
//}
//}

