#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include"../include/pi_approximation.h"
int main() {
    double epsilon;
	while(1)
	{
		
	
    printf("请输入精度要求（例如：1e-6 表示误差小于百万分之一）: ");
    if (scanf("%lf", &epsilon) != 1) {
        printf("输入错误，请输入一个有效的数字。\n");
        return EXIT_FAILURE;
    }

    double piApproximation = calculatePi(epsilon);
    printf("π的近似值为: %.15f\n", piApproximation);
}

    return 1;
}
