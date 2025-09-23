#include<stdio.h>
#include<stdlib.h> 


#define NUM 10 // 숫자의 갯수 
int main()
{
	char a[NUM];
	char b[NUM];
	int i;

	for (i = 0; i < NUM; i++)//10번 반복 
	{
		a[i] = i; // 숫자가 0~9가 들어감 순서대로 들어 갑니다.
		b[i] = i;
	}

	for (i = 0; i < NUM; i++) 
	{
		int j = rand() % NUM;   
		int temp = a[i];
		a[i] = a[j];//이렇게 옮기는 과정이 없으면 중복이 된다.(0~9까지 나오는 i의 값을 랜덤한 숫자를 넣은 J의 값을 넣는다)
		a[j] = temp;
	}

	for (i = 0; i < NUM; i++) 
	{
		int j = rand() % NUM; 
		int temp = b[i];
		b[i] = b[j]; //이렇게 옮기는 과정이 없으면 중복이 된다.(0~9까지 나오는 i의 값을 랜덤한 숫자를 넣은 J의 값을 넣는다)
		b[j] = temp;
	}


	printf("a[] :"); //앞에 표시 
	for (int i = 0; i < NUM; i++) //아래 내용을 10번 반복 
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
