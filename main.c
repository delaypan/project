#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include"../include/pi_approximation.h"
int main() {
    double epsilon;
	while(1)
	{
		
	
    printf("�����뾫��Ҫ�����磺1e-6 ��ʾ���С�ڰ����֮һ��: ");
    if (scanf("%lf", &epsilon) != 1) {
        printf("�������������һ����Ч�����֡�\n");
        return EXIT_FAILURE;
    }

    double piApproximation = calculatePi(epsilon);
    printf("�еĽ���ֵΪ: %.15f\n", piApproximation);
}

    return 1;
}
