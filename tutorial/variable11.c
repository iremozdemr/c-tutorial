#include <stdio.h>

int globalvariable = 70;

void myfunction(){
    int localvariable = 20;
    static int staticvariable = 30;

    globalvariable = globalvariable+10;
    localvariable = localvariable+10;
    staticvariable = staticvariable+10;

    printf("global: %d \n",globalvariable);
    printf("local: %d \n",localvariable);
    printf("static: %d \n",staticvariable);
}

int main(){
    printf("ilk kez fonksiyon cagrildi: \n");
    myfunction();

    printf("ikinci kez fonksiyon cagrildi: \n");
    myfunction();

    printf("üçüncü kez fonksiyon cagrildi: \n");
    myfunction();
    return 0;
}

//variable types:

//local

//global

//static

//constant(const)
//--> degistirilemez degisken olusturur
//--> degistirilmeye calisilirsa hata verir
//--> tanimlandiği satirda deger atanmalidir

//automatic(auto)
//--> local variable'lar default olarak auto variable'dır

//extern(extern)
//--> birden fazla dosyada kullanılabilir

//register(register)
//--> ram'de depolanmaz
//--> cpu'da depolanır
//--> memory adresine & ile ulaşılamaz