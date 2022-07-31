#include "s21_math.h"

int s21_abs(int x) {
    return x < 0 ? -x : x;
}

long double s21_fabs(double x) {
    long double res;
    if (x < 0) { res = x * - 1; }
    else { res = x; }
    return res;
}

long double s21_cos(double x) {
    double t , s;
    int p;
    p = 0;
    s = 1.0;
    t = 1.0;
    while(s21_fabs(t / s) > S21_EPS) {
        p++;
        t = (-t * x * x) / ((2 * p - 1) * (2 * p));
        s += t;
    }
    return s;
}

long double s21_sin(double x) {
    int i = 1;
    double cur = x;
    double acc = 1;
    double fact= 1;
    double pow = x;
    while (s21_fabs(acc) > S21_EPS){
        fact *= ((2 * i) * (2 * i + 1));
        pow *= -1 * x * x;
        acc =  pow / fact;
        cur += acc;
        i++;
    }
    return cur;
}

int s21_abs(int x) {
    if (x < 0) {
        x *= -1;
    }
    return (unsigned int) x;
}

long double s21_ceil(double x) {
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
