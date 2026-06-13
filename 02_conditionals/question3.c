#include <stdio.h> 

int main(){
int year;
printf("enter year");
scanf("%d", &year);
if(( year%4 == 0 && year%10 != 0) || (year%400 == 0)) {
    printf(" this year %d is leap year", year);
}
else{
   printf(" this year %d is not leap year", year);
}
    return 0;
}