#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>


int main() {
	int result = 1;
	int num = 0;
	for (int x = 1; x <= 10; x++) {              //当前的阶乘数字
		for (int y = 1; y <= x; y++) {           //开始阶乘
			result *= y;						 //计算结果
		}
		num += result;							 //存储结果
		result = 1;                              //初始化
	}
	printf("%d", num);
	return 0;
}
