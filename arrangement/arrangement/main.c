#include<stdio.h>
#include<stdlib.h> 


#define NUM 10
int main()
{
	char a[NUM];
	char b[NUM];
	int i;

	// ���� �õ� ���� (�Ź� �ٸ� ����)
	srand((unsigned)time(NULL));

	for (i = 0; i < NUM; i++) {
		a[i] = i;
		b[i] = i;
	}

	for (i = 0; i < NUM; i++) {
		int j = rand() % NUM;   // 0~9 �� ���� ��ġ ����
		// swap a[i] <-> a[j]
		int temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}


	for (i = 0; i < NUM; i++) {
		int j = rand() % NUM;   // 0~9 �� ���� ��ġ ����
		// swap a[i] <-> a[j]
		int temp = b[i];
		b[i] = b[j];
		b[j] = temp;
	}


	printf("a[] :");
	for (int i = 0; i < NUM; i++) {
		printf(" % d", a[i]);
	}

	printf("\nb[] :");
	for (int i = 0; i < NUM; i++) {
		printf(" % d", b[i]);
	}
	return 0;
}
