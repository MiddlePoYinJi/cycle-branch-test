#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>


int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int len = sizeof(arr) / sizeof(arr[0]);      //数组的长度
	int left = 0;                                //左索引
	int right = len - 1;                         //右索引
	int search = 10;                              //目标数

	while (left <= right) {
		int mid = (left + right) / 2;            //中间索引
		if (arr[mid] > search) {
			right = mid - 1;          
		}
		else if (arr[mid] < search) {
			left = mid + 1;
		}
		else {
			printf("查找到数字，下标为：%d", mid);
			break;
		}
	}

	if (left > right) {
		printf("没找到");
	}

	return 0;
}
