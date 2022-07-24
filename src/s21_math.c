#include "s21_math.h"

int s21_abs(int x) {
    return x < 0 ? -x : x;
}

int main() {
    printf("MY - %Lf, %Lf\n", s21_cos(15), s21_sin(15));
    printf("THEY - %f, %f", cos(15), sin(15));
}

long double s21_cos(double x) {
    double t , s;
    int p;
    p = 0;
    s = 1.0;
    t = 1.0;
    while(fabs(t / s) > S21_EPS) {
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
    while (fabs(acc) > S21_EPS){
        fact *= ((2 * i) * (2 * i + 1));
        pow *= -1 * x * x;
        acc =  pow / fact;
        cur += acc;
        i++;
    }
    return cur;
}