#include <stdio.h>

int myfunction1(int a,int b);
//function prototype

int myfunction2(int,int);
//function declaration
//the parameter name is not mandatory while declaring functions

int main(){
    int sum1;
    int sum2;

    sum1 = myfunction1(3,5);
    sum2 = myfunction2(3,5);
    return 0;
}

int myfunction1(int a,int b){
    return a+b;
}

int myfunction2(int a,int b){
    return a+b;
}