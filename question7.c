#include <stdio.h> 

int main(){
double x1,y1,y2,x2,y3,x3;
printf(" enter values of x1,y1,y2,x2,y3,x3");
scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &y2, &x2, &y3, &x3 );
double m1 = (y2-y1)/(x2-x1);
double m2 = (y3-y2)/(x3-x2);
if ( m1 == m2){
    printf(" all points fall on one straight line");
}
else{
     printf(" not  all points fall on one straight line");
}
    return 0;
}