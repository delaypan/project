#include<math.h>
double calculatePi(double epsilon) {
    double pi = 0.0;
    int sign = 1;
    int denominator = 1;
    double term;

    do {
        term = sign / (double)denominator;
        pi += term;
        sign *= -1; // �ı����
        denominator += 2; // ��һ��ķ�ĸ
    } while (fabs(term) > epsilon); // ����ľ���ֵС�ھ���Ҫ��ʱֹͣ

    return pi * 4.0; // ��Ϊ������Ĺ�ʽ�Ǧ�/4
}