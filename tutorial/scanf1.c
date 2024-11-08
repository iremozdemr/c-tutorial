#include <stdio.h>

int main(){
    //multiple string input
    char fullName2[30];

    printf("enter ur fullname: \n");
    fgets(fullName2,sizeof(fullName2),stdin);

    printf("%s",fullName2);

    //input
    char firstName[10];
    char lastName[10];
    int age;

    printf("enter ur name:");
    scanf("%s",firstName);

    printf("enter ur lastname:");
    scanf("%s",lastName);

    printf("enter ur age:");
    scanf("%d",&age);

    printf("%s %s %d \n",firstName,lastName,age);

    //multiple input
    char character;
    int number;

    printf("enter a number and a character:");
    scanf("%d %c",&number,&character);

    printf("the number is: %d \n",number);
    printf("the character is: %c \n",character);

    return 0;
}

//scanf("%d",&intVariable);
//scanf("%f",&floatVariable);
//scanf("%c",&charVariable);
//scanf("%s",stringVariable);