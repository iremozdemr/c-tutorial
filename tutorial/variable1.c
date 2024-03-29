#include <stdio.h>
//printf ve scanf gibi methodlar bu baslik dosyasinda tanimlanmistir

//.h ile biten dosyalar = header files

//lines begin with # are processed by the preprocesser before the program is compiled
//#include <file name>
//predefined dosyalar icin kullanilir
//#include "file name"
//userdefined dosyalar icin kullanilir

//c dili:
//procedural
//statically typed
//middle level

//programı çalıştırma 1. yol:
//gcc tutorial1.c
//./oluşandosya

//programı çalıştırma 2. yol:
//gcc -o myfile tutorial1.c
//./myfile

int main(){
    printf("%s is the best person ever","irem");
    printf("\n");
    printf("%s is the best %s ever","irem","programmer");
    printf("\n");
    printf("the char is %c",'a');
    printf("\n");
    printf("the char is %i",'a'); //char degiskenin integer halini yazar
    printf("\n");
    printf("the number is %d",5); 
    printf("\n");
    printf("the number is %i",5); 
    printf("\n");
    printf("the number is %c",65); //integer degiskenin char halini yazar
    printf("\n");
    printf("the double number is %lf",5.2); 
    printf("\n");
    printf("the float number is %f",2.1234567);
    printf("\n");
    printf("the float number is %.2f",2.1234567);
    printf("\n");
    printf("the float number is %.4f",2.1234567);
    printf("\n");
    printf("the octal number is %o",67);
    printf("\n");
    printf("the hexadecimal number is %x",15454);
    printf("\n");
    printf("the hexadecimal number is %X",15454);
    printf("\n");

    printf("line1");
    printf("\n\n"); //bir satir bosluk yaratir
    printf("line2");
    printf("\n");

    printf("%%"); //% karakterini ekrana bastırır
    printf("\n");

    int number = printf("%s \n","hello world");
    printf("%d \n",number);
    //ekrana yazılan yazının karakter sayısını döndürür

    return 0;
}

//string icin %s
//char icin %c
//int icin %d
//int icin %i
//double icin %lf
//double icin %f
//float icin %f
//octal icin %o
//hexadecimal icin %x veya %X
//bilimsel gosterim icin %e
//computer decides %g

//comment

/*
comment
*/

//before version c99 you could only use multiline comments in c