#include <stdio.h> 
#include<stdbool.h>
int main(){
typedef struct date{
    int day;
    int month;
    int year;
} date;
date a,b;

a.day = 8;
a.month = 01;
a.year = 2005;

b.day = 29;
b.month = 8;
b.year = 2005;
/*if(a.year==b.year ){
printf("equal");
} 
else{
printf("unequal");
}*/
bool flag = true;
if(a.day != b.day) flag = false;
if(a.month != b.month) flag = false;
if(a.year != b.year) flag = false;

if(flag==true) printf("the dates are equal");
else printf("the dates are different");
   return 0;
}