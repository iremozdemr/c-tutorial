#include <stdio.h>

//union is a user-defined data type
//union can contain elements of the different data types
//all the members are stored in the same memory location

//different ways to define an union variable

union union1{
    int i;
    char c;
}var1, var2, var3;

union union2{
    int i;
    char c;
};

int main(){
    union union2 var4, var5, var6;

    var1.i = 1;
    var2.i = 2;
    var3.i = 3;
    var4.i = 4;
    var5.i = 5;
    var6.i = 6;

    return 0;
}