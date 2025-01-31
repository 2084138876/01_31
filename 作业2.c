#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//  作业1  ：把  三个数 从大到小打印
// 方法一
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int tem = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	// 把a里面放最大值，b里面放中间值，c里面放最小值
//	//先比较a和b
//	if (a<b)
//	{
//		//交换ab的值
//		tem = a;
//		a = b;
//		b = tem;
//	}
//	if (a < c)
//	{
//		// 交换ac的值
//		tem = a;
//		a = c;
//		c = tem;
//	}
//	//交换后a已经是最大值，这时比较剩下的bc
//	//通过交换bc的值使b成为bc之间的较大者
//	if (b < c)
//	{
//		//交换bc的值
//		tem = b;
//		b = c;
//		c = tem;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}
//方法二   函数

// 定义一个交换函数(交换两个变量的值）
//void swap(int* px, int* py)
//{
//	int tem = *px;
//	*px = *py;
//	*py = tem;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int tem = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		swap(&a, &b);
//	}
//	if (a < c)
//	{
//		swap(&a, &c);
//	}
//	if (b < c)
//	{
//		swap(&b, &c);
//	}
//	printf("%d %d %d",a,b,c);
//	return 0;
//
//}


//作业2  打印1-100之间3的倍数
//方法一
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//方法二
//int main()
//{
//	int i = 0;
//	for (i = 3; i <= 100; i += 3)
//	{
//		printf("%d\n", i);
//	}
//}
//作业三  求两个数的最大公约数

//方法一
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int min = a > b ? b : a;
//	while (1)
//	{
//		if (a % min == 0 && b % min == 0) 
//		{
//			break;
//		}
//		min--;
//	}
//	printf("%d和%d的最大公约数是：%d\n", a, b, min);
//	return 0;
//}
//方法二 辗转相除法
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//	while (c=a%b)
//	{
//		//a%b=c    a%b=0时，b就是最大公约数
//	
//		a = b;
//		b = c;
//	}
//	printf("%d\n", b);
//	return 0;
//}
//作业三  数一下 1-100的整数中 出现了多少个数字 9   ； 例如：19一个，99 两个
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)//个位有9
//		{
//			count++;
//		}
//		if (i / 10 == 9)// 十位有9
//		{
//			count++;
//		}
//
//	}
//	printf("%d\n", count);
//	return 0;
//}
// 作业四  计算 1/1-1/2+1/3-1/4+……+1/99-1/100的值
//方法一
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + (1.0 / i) * pow(-1,i-1);
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
// 方法二
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + (1.0 / i) * flag;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//作业五
// 找出10个数字中的最大值
//int main()
//{
//	// 准备10个数字
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10 };
//	// 先假设最大值是arr[0]
//	int max = arr[0];
//	// 其他值一个一个和max 比较，比max大就修改max
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//
//	return 0;
//}
// 作业六 
// 打印99乘法表
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %d\t", j, i, i * j);
//		}
//		printf("\n");
//
//	}
//	return 0;
//}