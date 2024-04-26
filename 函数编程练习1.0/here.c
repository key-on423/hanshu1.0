#include <stdio.h>


//1.设计一个函数min（x，y），返还两个double 类型值的较小值。在一个简单的驱动程序中测试该函数
//double min (double, double);
//int main()
//{
//	double x, y,z;
//	printf("请你输入两个值，我将为你比较他们的大小，并返还较小值\n");
//	scanf("%lf %lf", &x, &y);
//	z = min(x, y);
//	printf("较小值为%lf", z);
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
//2.设计一个函数chline（ch，i，j），打印指定的字符j行i列。在一个简单的驱动程序中测试该函数
//void chline(char, int, int);
//int main()
//{
//	    int i, j;
//	    char ch;
//	    printf("请输入一个字符并告诉我你想打印它的行数和列数\n");
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
//3.编写一个函数，接受3个参数：一个字符和两个整数。字符参数是待打印的字符，第一个整数指定一行中打印字符的次数
//第二个整数指定打印指定字符的行数。编写一个调用该函数的程序
//int main()
//{   
//	int hang,lie,x,y;
//	char zifu;
//	printf("请输入一个字符告诉我你想打印的行数和列数\n");
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