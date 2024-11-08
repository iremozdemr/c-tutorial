#include <stdio.h>

int main(){
    char string[128];
    printf("enter a string: ");
    scanf("%[A-Z]s",string);
    printf("you entered: %s \n",string);
    //sadece büyük harf içeren karakterleri stringde depolar

    return 0;
}