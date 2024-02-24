#include <stdio.h>
#include <stdbool.h>

int main(){
    
    const int number = 15;
    //degistirilemez degisken olusturur
    //degistirilmeye calisilirsa hata verir
    //tanimlandiği satirda deger atanmalidir

    bool statement1 = true;
    bool statement2 = false;
    printf("%i\n", statement1); //sonuc 1
    printf("%i\n", statement2); //sonuc 0

    _Bool statement3 = true;
    _Bool statement4 = false;
    printf("%i\n", statement3); //sonuc 1
    printf("%i\n", statement4); //sonuc 0

    bool isHamburgerTasty = true;
    bool isPizzaTasty = true;
    printf("%d\n", isHamburgerTasty == isPizzaTasty); //sonuc 1
    //boolean ifadeler de karsilastirilabilir

    int x = 5;
    int y = 3;
    printf("%i\n", x>y); //sonuc 1
    printf("%i\n", x<y); //sonuc 0
    
    return 0;
}