#include "s21_math.h"

int main(void) {
    // int x = NULL;
    // printf("value of org = %d\n", abs(x));           // for abs
    // printf("value of myf = %d\n", s21_abs(x));

    // double x = 47;
    // printf("value of org = %.6f\n", acos(x));        // for acos ----
    // printf("value of myf = %.f\n", s21_acos(x));

    // long double x = 6.83;
    // printf("value of org = %f\n", ceil(x));          // for ceil
    // printf("value of myf = %Lf\n", s21_ceil(x));

    double x = 35;  
    printf("value of org = %.20f\n", sqrt(x));          // for sqrt
    printf("value of myf = %.20Lf\n", s21_sqrt(x));
}

int s21_abs(int x) {
    if (x < 0) {
        x *= -1;
    }
    return (unsigned int) x;
}

long double s21_ceil(double x) {
    // 2.83 = 3.00

    // double a = 1;
    // long n = 2;
    // while(n) {
    //     if(n % 2) {
    //         a *= x;
    //         n--;
    //     }
    //     else {
    //         x *= x;
    //         n /= 2;    
    //     }
    // }
    // return a;
    // 2.83 - 2 = 0.83 > 0
    int s = x;
    if (x - s > 0) {
        s += 1;
    }
    long double res = s;
    return res;
}

long double s21_sqrt(double x) {
    int i = 2;
    int num = x;
    while(i <= num){
        if(num % i == 0) {
            printf("%d\n", i);
            num = num / i;
            if(num > 1)
                printf("*\n");
        }
        else
            i++;      
    }
    return x;
}

// long double s21_acos(double x) {
//    return x;
// }
