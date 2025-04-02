#define _CRT_SECURE_NOT_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<Windows.h>


void compared(int ret);
int password(char pass0[6], char pass1[6]);
char plain(char message0[321], int len);
int returntobinary(char message0[321], int** message1, int** message2, int** message3, int messagedata, int len, int plus);
//int ip(int ip0[5][64][8], int message2[321]);


int main()
{
	char pass0[6];
	char pass1[6];

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
	printf("HELLO! I am Mari, and I am the developer of this program :)\nThis program does its best to encrypt your messages.\n");
	printf("We will now enter the world of cryptography!");
	printf("\n\n=========================================================================================");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
	printf("\n\n >> Please enter a 5-character password : ");
	int ret = password(pass0, pass1);
	compared(ret);

	char message0[321];
	int messagedata = 320;
	int set0[65];
	int set1[65];
	int set2[65];
	int* message1;
	int* message2;
	int* message3;


	int plus = 0;
	int len = 0;
	plain(message0, *message1, len);
	returntobinary(message0, *message1, *message2, *message3, messagedata, len, plus);

	int ip0[5][64][8];
	//ip(ip0, message1);



}

int password(char pass0[6], char pass1[6])
{
	int i = 0;
	for (i = 0;i < 5;i++)
	{
		pass0[i] = _getch();
		printf("*");
	}
	pass0[5] = '\0';
	printf("\n >> try again!: ");

	for (i = 0;i < 5;i++)
	{
		pass1[i] = _getch();
		printf("*");
	}
	pass1[5] = '\0';
	printf("\n");
	return strcmp(pass0, pass1);

}

void compared(int ret)
{
	if (ret == 0)
	{
		printf("");
	}
	else
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		printf("\n=========================================================================================");
		printf("\n...Who are you?");
		exit(0);
	}
}

char plain(char message0[321], int len)
{
	printf("\n >> Now, Enter your message in 320 charactres!");
	printf("\n : ");
	fgets(message0, sizeof(message0), stdin);

	if ("\n", message0)
	{
		printf("\n >> GOOD JOB :)\n");
	}

	len = strlen(message0);
}

int returntobinary(char message0[321], int** message1, int** message2, int** message3, int messagedata, int len, int plus)
{
	len == messagedata;

	*message1 = (int*)malloc(messagedata * sizeof(int));
	*message2 = (int*)malloc(messagedata * sizeof(int));
	*message3 = (int*)malloc(messagedata * sizeof(int));









	// 일단 320개의 값이 나오기는 한다만

	free(message1);
	free(message2);
	free(message3);

}