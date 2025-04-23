#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<Windows.h>


void compared(int ret);
int password(char pass0[6], char pass1[6]);
char plain(char message0[321], int len); // len 은 받은 문자열 개수(=길이)
int returntobi(char message0[321], int binary[3201]);

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

	char message0[321] = { 0, };
	int message_array[321] = { 0, };
	int plus = 0;
	int len = 0;
	int binary[3201] = { 0, };

	plain(message0, len);
	returntobi(message0, binary);

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
	scanf("%320[^\n]s", message0);

	for (int i = 0; i < strlen(message0);i++)
	{
		if (message0[i] == ' ')
		{
			message0[i] = 1;
		}
	}
	printf("\n >> GOOD JOB :)\n");

	len = strlen(message0);
}
int returntobi(char message0[321], int binary[3201])
{
	for (int i = 0;i < len-1;i++)
	{
		message0[i]==
	}
}


