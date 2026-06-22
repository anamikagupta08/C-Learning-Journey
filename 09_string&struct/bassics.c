#include <stdio.h> 

int main(){
    struct book{
        char name[30];
        int price;
        int no_of_pages;
    };
    struct book book1;
printf("enter 1st book name:\n ");
scanf("%s",&book1.name);
printf("enter 1st book price:\n ");
scanf("%d",&book1.price);
printf("enter 1st book no of pages:\n ");
scanf("%d",&book1.no_of_pages);


printf("%s\n", book1.name);
 printf("%d\n", book1.price);
    printf("%d\n", book1.no_of_pages);

    return 0;
}