#include <stdio.h>

int main(){
    int var1;
    printf("%d \n",var1);
    //garbage value

    auto int var2;
    printf("%d \n",var2);
    //garbage value

    register int var3;
    printf("%d \n",var3);
    //garbage value

    static int var4;
    printf("%d \n",var4);
    //0

    //int var2 = NULL;
    //printf("%d \n",var2);
    //pointer olmayan değişkene null değeri atanamaz

    return 0;
}