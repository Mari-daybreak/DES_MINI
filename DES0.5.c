#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<Windows.h>


void compared(int ret);
int password(char pass0[6], char pass1[6]);
char plain(char message0[321], char message1[321], int gett); 

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
	char message1[321] = { 0, };
	int message_array[321] = { 0, };
	int plus = 0;
	int gett = 0;
	int binary[3201] = { 0, };

	plain(message0, message1, gett);
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

char plain(char message0[321], char message1[321], int gett)
{
	printf("\n >> Now, Enter your message in 320 charactres!");
	printf("\n    If you have completed the input, please press the [ Enter key ].");
	printf("\n : ");
	int j = 0;

	while (j < 320)
	{
		gett = getchar();
		if (gett == '\n')
		{
			break;
		}
		message0[j++] = gett;
	}
	message0[j] = '\0';

	for (int i = 320;i < message0[j];i--)
	{
		message0[i] == 0;
	}

	printf("\n >> GOOD JOB :)\n");

	for (int k = 0;k < 320;k++)
	{
		message1[k] = message0[k];
		printf("%d", message1[k]);
	}

	// 여기서 정수형으로 완벽히 바뀌었는지 확인 필요 = 확인 완
}
