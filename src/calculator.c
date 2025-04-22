#include <stdio.h>
#include <stdlib.h>
#include "../include/calculator.h"

void read_input(int *pa, int *pb){
    int nitems;
    printf("input a and b: ");
    nitems = scanf("%d%d", pa,pb);
    if ((nitems!=2 || (*pb==0))){
        printf("Something Wrong ");
        abort();
    }
}

int add(int a,int b){
    return a+b;
}

int substruct(int a,int b){
    return a-b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    if (b == 0)
        return 0;
    return (float)a / b;
}

int factorial(int n){
    if (n<0){
        abort();
    }
    int result  = 1;
    for (int i=1;i<=n;i++){
        result *= i;
    }
    return result;
}


int fibonacci(int n) {
    if (n < 0) return -1;
    if (n == 0) return 0;
    if (n == 1) return 1;

    int a = 0, b = 1, temp;
    for (int i = 2; i <= n; ++i) {
        temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}

int gcd(int a, int b) {
    if (a == 0) return b;
    if (b == 0) return a;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    if (a == 0 || b == 0) return 0;
    int g = gcd(a, b);
    return (a / g) * b;
}

int power(int base, int exp) {
    if (exp < 0) return -1;
    int result = 1;
    for (int i = 0; i < exp; ++i) {
        result *= base;
    }
    return result;
}

double square_root(int x) {
    if (x < 0)
        return -1.0;
    double low = 0, high = x, mid;
    for (int i = 0; i < 50; ++i) {
        mid = (low + high) / 2;
        if (mid * mid > x)
            high = mid;
        else
            low = mid;
    }
    return mid;
}

int mod(int a, int b) {
    if (b == 0) return 0;
    return a % b;
}
