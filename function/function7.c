#include <stdio.h>

int x = 1; 

void function1(){
    x = 3;
    printf("%d \n",x);
}

void function2(){
    x = 2;
    printf("%d \n",x);
}

int main(){
    printf("%d \n",x);

    x = 2;
    printf("%d \n",x);

    function1();
    printf("%d \n",x);

    function2();
    printf("%d \n",x);

    {
        int x = 5;
        printf ("%d\n", x);
        {
            x = 6;
            printf ("%d\n", x);
        }
    }

    printf ("%d\n", x);

    return 0;
}