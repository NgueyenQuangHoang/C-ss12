#include<stdio.h>

int factorial(int n){
    if (n == 0)
    {
        return 1;
    }else{
        return n * factorial(n-1);
    }
}

int main(){
    int n;
    printf("enter n: ");
    scanf("%d", &n);
    printf("n! = %d", factorial(n));
}