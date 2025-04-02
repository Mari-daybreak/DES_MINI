#define _CRT_SECURE_NOT_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<Windows.h>
#include <stdbool.h>


void compared(int ret);
int password(char pass0[6], char pass1[6]);
char plain(char message0[321], int message1[321], int len);
void returntobinary(int message0[321], int message1[321], int message2[321], int len);
// int ip(int ip0[5][64][8], int message2[321]);


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
	int message1[321];
	int message2[321];
	plain(message0, message1, message2);
	int len = 0;
	void returntobinary(message0, message1, message2, len);

	//int ip0[5][64][8];
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

char plain(char message0[321], int message1[321], int len)
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

void returntobinary(int message0[321], int message1[321], int message2[321], int len)
{
	for (int i = 0;i < len;i++)
	{
		message1[i] = (int)message0[i];
	}
	for (int i = len - 1; i >= 0; i--)
	{
		message2[i] = message1[i] % 2;
		message1[i] /= 2;
	}

	for (int j = len;j < 320;j++)
	{
		message2[j] = 0;
	}

}
