#include<stdio.h>
#include<stdlib.h> 


#define NUM 10 // ������ ���� 
int main()
{
	char a[NUM];
	char b[NUM];
	int i;

	for (i = 0; i < NUM; i++)//10�� �ݺ� 
	{
		a[i] = i; // 10�� �� 
		b[i] = i;
	}

	for (i = 0; i < NUM; i++) 
	{
		int j = rand() % NUM;   
		int temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}

	for (i = 0; i < NUM; i++) 
	{
		int j = rand() % NUM;   
		int temp = b[i];
		b[i] = b[j]; //�̷��� �ű�� ������ ������ �ߺ��� �ȴ�.
		b[j] = temp;
	}


	printf("a[] :"); //�տ� ǥ�� 
	for (int i = 0; i < NUM; i++) 
	{
		printf(" % d", a[i]);
	}

	printf("\nb[] :");
	for (int i = 0; i < NUM; i++) 
	{
		printf(" % d", b[i]);
	}
	return 0;
}
