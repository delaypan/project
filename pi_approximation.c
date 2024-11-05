#include<math.h>
double calculatePi(double epsilon) {
    double pi = 0.0;
    int sign = 1;
    int denominator = 1;
    double term;

    do {
        term = sign / (double)denominator;
        pi += term;
        sign *= -1; // 改变符号
        denominator += 2; // 下一项的分母
    } while (fabs(term) > epsilon); // 当项的绝对值小于精度要求时停止

    return pi * 4.0; // 因为莱布尼茨公式是π/4
}