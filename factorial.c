#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>


int main() {
	int result = 1;
	int num = 0;
	for (int x = 1; x <= 10; x++) {              //��ǰ�Ľ׳�����
		for (int y = 1; y <= x; y++) {           //��ʼ�׳�
			result *= y;						 //������
		}
		num += result;							 //�洢���
		result = 1;                              //��ʼ��
	}
	printf("%d", num);
	return 0;
}
