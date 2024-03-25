#include <stdio.h>

int main(){
    int number1 = 10;
    int isPositive;

    isPositive = number1 > 0 ? 1 : 0;
    //variable = (condition) ? expressionTrue : expressionFalse;

    printf("%d\n",isPositive);

    switch(2){
        case 1:
            printf("wrong");
            break;
        case 2:
            printf("the number is 2 \n");
            break;
        case 3:
            printf("wrong");
            break;
        default:
            printf("default");
            break;
    }

    switch('a'){
        case 'b':
            printf("wrong");
            break;
        case 'a':
            printf("the character is a \n");
            break;
        case 'c':
            printf("wrong");
            break;
        default:
            printf("default");
            break;
    }

    //switch expression sadece
    //-integer olabilir
    //-character olabilir

    return 0;
}