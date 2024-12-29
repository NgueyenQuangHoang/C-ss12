#include<stdio.h>

int sum(int number1, int number2){
    return number1 + number2;
}

int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    printf("%d", sum(a,b));
}