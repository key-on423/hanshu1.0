#include <stdio.h>


//1.���һ������min��x��y������������double ����ֵ�Ľ�Сֵ����һ���򵥵����������в��Ըú���
//double min (double, double);
//int main()
//{
//	double x, y,z;
//	printf("������������ֵ���ҽ�Ϊ��Ƚ����ǵĴ�С����������Сֵ\n");
//	scanf("%lf %lf", &x, &y);
//	z = min(x, y);
//	printf("��СֵΪ%lf", z);
//	return 0;
//}
//double min(double x, double y)
//{
//	double z;
//	if (x > y)
//		z = y;
//	else
//		z = x;
//	return z;
//}
//2.���һ������chline��ch��i��j������ӡָ�����ַ�j��i�С���һ���򵥵����������в��Ըú���
//void chline(char, int, int);
//int main()
//{
//	    int i, j;
//	    char ch;
//	    printf("������һ���ַ��������������ӡ��������������\n");
//		scanf("%c %d %d", &ch, &i, &j);
//		chline(ch, i, j);
//	return 0;
//}
//void chline(char ch, int i, int j)
//{
//	int x, y;
//	for (x = 1;x <= i;x++)
//	{
//		for (y = 1;y <= j;y++)
//		{
//			printf("%c ", ch);
//		}
//		printf("\n");
//	}
//	
//}
//3.��дһ������������3��������һ���ַ��������������ַ������Ǵ���ӡ���ַ�����һ������ָ��һ���д�ӡ�ַ��Ĵ���
//�ڶ�������ָ����ӡָ���ַ�����������дһ�����øú����ĳ���
//int main()
//{   
//	int hang,lie,x,y;
//	char zifu;
//	printf("������һ���ַ������������ӡ������������\n");
//	scanf("%c %d %d", &zifu, &hang, &lie);
//	for (x = 1;x <= hang;x++)
//	{
//		for (y = 1;y <= lie;y++)
//		{
//			printf("%c ", zifu);
//		}
//		printf("\n");
//	}
//	printf("Done!\n");
//	return 0;
//}