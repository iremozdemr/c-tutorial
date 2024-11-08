#include <stdio.h>

int main(){

    //scientific notation
    double normalNumber = 25000;
    double scientificNumber = 2.5e4;

    printf("%f \n",normalNumber);
    printf("%e \n",normalNumber);
    printf("%f \n",scientificNumber);
    printf("%e \n",scientificNumber);

    //scanf() double icin %lf kullanilir
    //printf() double icin %f kullanilir
    double number;
    printf("enter a number: ");
    scanf("%lf", &number);
    printf("\n");
    printf("%f",number);
    printf("\n");

    return 0;
}