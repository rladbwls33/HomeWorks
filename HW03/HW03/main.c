#include<math.h>
#include<stdio.h>
#include<Windows.h>

#define PI 3.14159265358979323846

void gotoxy(int x, int y) {
	printf("\x1b[%d;%dH", y, x);
}

//매개변수 isExploded#include <stdio.h>

//0: 폭발전 폭탄
//1: 폭발함
void printBomb(int isExploded)
{
	//폭탄은 항상 7칸
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

	// 여기부터 코드를 작성하세요----------------------   
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

	// 여기까지 코드를 작성하세요----------------------   
	gotoxy(10, 20);

	return 0;
}

