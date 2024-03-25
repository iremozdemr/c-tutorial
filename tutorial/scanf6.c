#include <stdio.h>

int main(){
    char text[100];

    printf("please enter the text: ");
    gets(text);

    printf("you entered: %s \n",text);
    return 0;
}