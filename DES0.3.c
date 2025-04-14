#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<Windows.h>


void compared(int ret);
int password(char pass0[6], char pass1[6]);
char plain(char message0[321], int len); // len 은 받은 문자열 개수(=길이)
int returntobinary(char message0[321], int messagedata, int set0[64], int set1[64], int set2[64], int set3[64], int set4[64], int len, int message_array[321]);
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

	char message0[321] = { 0, };
	int messagedata = 0;
	int message_array[321] = { 0, };
	int set0[64];
	int set1[64];
	int set2[64];
	int set3[64];
	int set4[64];

	int plus = 0;
	int len = 0;
	plain(message0, len);


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

int returntobinary(char message0[321], int messagedata, int set0[64], int set1[64], int set2[64], int set3[64], int set4[64], int len, int message_array[321])
{
	// len 이 받은 문장의 길이
	messagedata = (320 - len); // 패딩 칠 공간 확보
	
	for (int i = 0;i < len;i++)
	{
		// message_array 는 message - message_array - set 로 문장을 나눌 때 중간역할 하는 애
		message_array[i] == message0[i];
		
		if (len >= 64)
		{
			for (int i = 0;i < 63;i++)
			{
				message_array[i] == set0[i];
			}
			for (int t = 320;t < 64;t--)
			{
				message_array[t] == '0';
			}


			if (len >= 128)
			{
				for (int i = 64;i < 127;i++)
				{
					message_array[i] == set1[i];
				}
				for (int t = 320;t < 128;t--)
				{
					message_array[t] == '0';
				}


				if (len >= 192)
				{
					for (int i = 128;i < 191;i++)
					{
						message_array[i] == set2[i];
					}
					for (int t = 320;t < 192;t--)
					{
						message_array[t] == '0';
					}


					if (len >= 256)
					{
						for (int i = 192;i < 255;i++)
						{
							message_array[i] == set3[i];
						}
						for (int t = 320;t < 256;t--)
						{
							message_array[t] == '0';
						}


						if (len <= 320)
						{
							for (int i = 256;i < 320;i++)
							{
								message_array[i] == set4[i];
							}
							for (int t = 320;t < len-1;t--)
							{
								message_array[t] == '0';
							}
						}
						else
						{
							for (int j = 0;j < 63;j++)
							{
								message_array[j] == set0[j];
							}
							for (int j = 64;j < 127;j++)
							{
								message_array[j] == set1[j];
							}
							for (int j = 128;j < 191;j++)
							{
								message_array[j] == set2[j];
							}
							for (int j = 192;j < 255;j++)
							{
								message_array[j] == set3[j];
							}
							for (int j=256;j<len;j++)
							{
								message_array[j] == set4[j];
							}
							for (int t = 320;t < len - 1;t--)
							{
								message_array[t] == '0';
							}
						}
					}
					else
					{
						for (int j = 0;j < 63;j++)
						{
							message_array[j] == set0[j];
						}
						for (int j = 64;j < 127;j++)
						{
							message_array[j] == set1[j];
						}
						for (int j = 128;j < 191;j++)
						{
							message_array[j] == set2[j];
						}
						for (int j = 192;j < len;j++)
						{
							message_array[j] == set3[j];
						}
						for (int t = 320;t < len - 1;t--)
						{
							message_array[t] == '0';
						}
					}
				}
				else
				{
					for (int j = 0;j < 63;j++)
					{
						message_array[j] == set0[j];
					}
					for (int j = 64;j <127;j++)
					{
						message_array[j] == set1[j];
					}
					for (int j=128;j<len;j++)
					{
						message_array[j] == set2[j];
					}
					for (int t = 320;t < len - 1;t--)
					{
						message_array[t] == '0';
					}
				}
			}
			else
			{
				for (int j = 0;j < 63;j++)
				{
					message_array[j] == set0[j];
				}
				for (int j = 64;j < len;j++)
				{
					message_array[j] == set1[j];
				}
				for (int t = 320;t < len - 1;t--)
				{
					message_array[t] == '0';
				}
			}
		}
		else
		{
			for (int j = 0;j <len;j++)
			{
				message_array[j] == set0[j];
			}
			for (int t = 320;t < len-1;t--)
			{
				message_array[t]== '0';
			}

		}
	}
	
	
}

