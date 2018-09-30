#include <stdio.h>
#include <conio.h>
#include <string.h>

#define N 20

void beep();
void GetNumberStr(char s[]);
void AddNumberStr(char a[], char b[], char c[]);
char AddChar(char ch1, char ch2);
void LeftTrim(char str[]);


int tag = 0;

void main()
{
	char a[N+1] = {0}, b[N+1] = {0}, c[N+2];
	printf("a=");
	while(strlen(a) == 0)							//���뱻����a 
		GetNumberStr(a);
	printf("\nb=");
	while(strlen(b) == 0)							//�������b 
		GetNumberStr(b);
	
	AddNumberStr(a, b, c);							//�������c
	printf("\na+b=%s \n", c);						//��ʾ������
}


void GetNumberStr(char s[])
{
	int i = 0;
	char ch;
	
	while(1)
	{
		ch = getch();								//��ȡ������ַ�������ʾ 
		if(ch == '\r')								//�س������˳� 
			break;
		if(ch == '\b')								//�˸�� 
		{
			if(ch > 0)
			{
				printf("%c %c", ch, ch);
				i--;
			}
			else
				beep();
			continue;
		}
		
		if(ch < '0' || ch > '9')					//�������ַ� 
		{
			beep();
			continue;
		}
		
		if(i < N)									//�����ַ� 
		{
			printf("%c", ch);
			s[i++] = ch;
		}
		else
			beep();
	}
	s[i] = '\0';									//���ַ���������־
}

void beep()											//���� 
{
	printf("\07");
}

//�������������ַ���֮�ͣ�����c��
void AddNumberStr(char a[], char b[], char c[])
{
	int i, j, k;
	memset(c, ' ', N+2);							//��cȫ�����
	j = strlen(a) - 1;
	j = strlen(b) - 1;
	k = N;
	while(i >= 0 && j >= 0)							//����������������մ��������˳����� 
		c[k--] = AddChar(a[i--], b[j--]);
	
	while(i >= 0)									//������û�м���
		c[k--] = AddChar(a[i--], '0');
	
	while(j >= 0)									//����û�м��� 
		c[k--] = AddChar(b[j--], '0');
	
	if(tag == 1)									//����н�λ��������ں��������λ 
		c[k] = '1';
	
	c[N+1] = '\0';									//���ַ���������־ 
	LeftTrim(c);									//ȥ���ַ���c��ߵĿո� 
}


char AddChar(char ch1, char ch2)					//�������������ַ��ĺ�
{
	char ch;
	
	ch = (ch1 - 0x30 + ch2 - 0x30) + tag;			//�������ַ�����Ӧ���������λ��� 
	if(ch >= 10)									//�������10 
	{
		tag = 1;									//�н�λ 
		return(ch - 10 + 0x30);						//����λ����10�����0x30ת�����������ַ� 
	}
	else
	{
		tag = 0;									//û��λ 
		return (ch + 0x30);							//����������0x30ת���ɶ�Ӧ�������ַ� 
	}
}


void LeftTrim(char str[])							//ȥ���ַ�����ߵĿո�
{
	int i;
	for(i = 0; str[i] == ' '; i++)					//���ҵ�1���ǿո��ַ���λ�� 
		;
	strcpy(str, str+i);
}
