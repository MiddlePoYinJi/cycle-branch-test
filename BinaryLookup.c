#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>


int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int len = sizeof(arr) / sizeof(arr[0]);      //����ĳ���
	int left = 0;                                //������
	int right = len - 1;                         //������
	int search = 10;                              //Ŀ����

	while (left <= right) {
		int mid = (left + right) / 2;            //�м�����
		if (arr[mid] > search) {
			right = mid - 1;          
		}
		else if (arr[mid] < search) {
			left = mid + 1;
		}
		else {
			printf("���ҵ����֣��±�Ϊ��%d", mid);
			break;
		}
	}

	if (left > right) {
		printf("û�ҵ�");
	}

	return 0;
}
