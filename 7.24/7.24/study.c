#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	unsigned int a = 0;
//	for (a = 9; a >= 0; a--)
//	{
//		printf("%u\n", a);//��ѭ��
//
//	}
//	char arr[1000];
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		arr[i] = -1 - i;
//	}
//	printf("%d\n", strlen(arr));//255 ���1000���� ��-128��127 �е����֣�������0��ͣ�����ˣ�\0��ascll��ֵ��0 ����int �����ֵ
//	return 0;
//	}//unsigned char ��Χ��0-255 char ��Χ��-128 -127
//float ��������δ洢��
//float p =5.5��
//101.1 ���ɶ����� ����m 1.011
//��-1��^0 ��ʾ���� 
//2*2
//��-1��^0 *1.011*2^2
//0 10000001 �˸�λ��2+127��01100000000000000000000

int main()
{
	int n = 9;
	//  0 00000000 00000000 00000000 0001001
	float *p = (float*)&n;

	printf("%d\n", n);//9
	printf("%f\n", *p);//�Ը���������ʽ������-1��^0 * 00000000 00000000000000001001 = (-1)^0*0.0000000000000001001*2^-126

	*p = 9.0;
	//1001.0 -1)^0*1.001*2^3  0 10000010 001000000000000000000 ���� ��Ҫ���Դ�� ������λ��0 ���� ��ͬ
	printf("%d\n", n);//
	printf("%f\n", *p);


	return 0;
}