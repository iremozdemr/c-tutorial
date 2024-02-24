#include <stdio.h>

//the size of the union
//will always be equal to the size of the largest member

union test1{
    int x;
    int y;
} Test1;
 
union test2{
    int x;
    char y;
} Test2;
 
union test3{
    int arr[10];
    char y;
} Test3;

int main(){
    // finding size using sizeof() operator
    int size1 = sizeof(Test1);
    int size2 = sizeof(Test2);
    int size3 = sizeof(Test3);
 
    printf("Sizeof test1: %d \n", size1); //4
    printf("Sizeof test2: %d \n", size2); //4
    printf("Sizeof test3: %d \n", size3); //40
    return 0;
}