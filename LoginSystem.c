#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>


int main() {
	int x = 1;
	char password[20] = { 0 };

	for (x = 1; x <= 3; x++) {
		printf("���������룺->");
		scanf("%s", password);

		if (strcmp(password, "123456") == 0) {
			printf("��½�ɹ�");
			break;
		}
		if (x == 3) {
			printf("��½ʧ��");
		}
	}


	return 0;
}
