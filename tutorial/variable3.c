#include <stdio.h>

int main(){

    float number = 3.5;

    printf("%f\n",number);

    printf("%.1f\n",number);
    //noktadan sonra 1 basamak goster

    printf("%.2f\n",number);
    //noktadan sonra 2 basamak goster

    printf("%.10f\n",number);
    //noktadan sonra 10 basamak goster

    int x = 5;
    int y = 2;
    int result = x/y;
    //sonuc 2 cikar

    //conversion cesitleri
    //-implicit(automatically)
    //-explicit(manually)

    float num1 = 9;
    printf("%f\n",num1);
    //implicit conversion

    int num2 = 99.9;
    printf("%i\n",num2);
    //implicit conversion

    float num3 = 5/2;
    printf("%f\n",num3); //sonuc 2 olur
    //implicit conversion

    float num4 = (float)5/2;
    printf("%f\n",num4); //sonuc 2.5 olur
    //explicit conversion

    return 0;
}