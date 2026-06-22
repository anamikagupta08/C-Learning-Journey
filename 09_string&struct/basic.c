#include <stdio.h> 
#include<string.h> 
int main(){
    char str[40];
    //scanf("%s",str);  // why no & bcz we are taking complete str so address of particular char needed
    // if we take input through scanf that only first word will print after space word will not print
    gets(str); //entire input will be considered
    printf("your input was : %s",str);
    return 0;
}