#include <stdio.h>
#include "source1.h"

int main(){
    int a = TAKECUBE(5);
    int b = sum1(2);
    float c = sum2(2,4);

    printf("%d \n",a);
    printf("%d \n",b);
    printf("%f \n",c);

    return 0;
}