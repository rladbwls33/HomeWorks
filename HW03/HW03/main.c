#include<math.h>
#include<stdio.h>
#include<Windows.h>

#define PI 3.14159265358979323846

void gotoxy(int x, int y) {
	printf("\x1b[%d;%dH", y, x);
}

//�Ű����� isExploded#include <stdio.h>

//0: ������ ��ź
//1: ������
void printBomb(int isExploded)
{
	//��ź�� �׻� 7ĭ
	if (isExploded)
	{
		printf("\x1b[A^^^^^^^");
		printf("\x1b[B\x1b[7D!!BAM!!");
		printf("\x1b[B\x1b[7D^^^^^^^");
	}
	else

		printf("(  b  )");
}

int main()
{

	// ������� �ڵ带 �ۼ��ϼ���----------------------   
	gotoxy(0, 3);
	printBomb(0);
	int startX = 15, startY = 9;
	int posX = startX, posY = startY;
	int dx, dy;
	double angle = 270.0;
	int length = 0;
	int count = 0;
	while (length < 13)
	{
		dx = cos(angle * PI / 180.0);
		dy = sin(angle * PI / 180.0);

		while (count < length)
		{
			Sleep(100);
			posX += dx;
			posY += dy;
			gotoxy(posX, posY);
			printf("#");
			count++;
		}
		angle -= 90.0;
		dx = cos(angle * PI / 180.0);
		dy = sin(angle * PI / 180.0);

		count = 0;
		while (count < length)
		{
			Sleep(100);
			posX += dx;
			posY += dy;
			gotoxy(posX, posY);
			printf("#");
			count++;
		}
		length++;

	}
	gotoxy(14, 9);
	printf("*");

	 startX = 15, startY = 9;
	 posX = startX, posY = startY;
	 dx, dy;
	 angle = 270;
	 length = 0;
	 count = 0;
	while (length < 13)
	{
		dx = cos(angle * PI / 180.0);
		dy = sin(angle * PI / 180.0);

		while (count < length)
		{
			
			posX += dx;
			posY += dy;
			gotoxy(posX, posY);
			printf("*");
			Sleep(200);
			gotoxy(posX, posY);
			printf(" ");
			count++;
		}
		angle -= 90.0;
		dx = cos(angle * PI / 180.0);
		dy = sin(angle * PI / 180.0);

		count = 0;
		while (count < length)
		{
			
			posX += dx;
			posY += dy;
			gotoxy(posX, posY);
			printf("*");
			Sleep(200);
			gotoxy(posX, posY);
			printf(" ");
			count++;
		}
		length++;

	}


	gotoxy(0, 3);
	printBomb(1);

	// ������� �ڵ带 �ۼ��ϼ���----------------------   
	gotoxy(10, 20);

	return 0;
}

