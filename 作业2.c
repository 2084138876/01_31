#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//  ��ҵ1  ����  ������ �Ӵ�С��ӡ
// ����һ
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int tem = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	// ��a��������ֵ��b������м�ֵ��c�������Сֵ
//	//�ȱȽ�a��b
//	if (a<b)
//	{
//		//����ab��ֵ
//		tem = a;
//		a = b;
//		b = tem;
//	}
//	if (a < c)
//	{
//		// ����ac��ֵ
//		tem = a;
//		a = c;
//		c = tem;
//	}
//	//������a�Ѿ������ֵ����ʱ�Ƚ�ʣ�µ�bc
//	//ͨ������bc��ֵʹb��Ϊbc֮��Ľϴ���
//	if (b < c)
//	{
//		//����bc��ֵ
//		tem = b;
//		b = c;
//		c = tem;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}
//������   ����

// ����һ����������(��������������ֵ��
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


//��ҵ2  ��ӡ1-100֮��3�ı���
//����һ
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
//������
//int main()
//{
//	int i = 0;
//	for (i = 3; i <= 100; i += 3)
//	{
//		printf("%d\n", i);
//	}
//}
//��ҵ��  �������������Լ��

//����һ
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
//	printf("%d��%d�����Լ���ǣ�%d\n", a, b, min);
//	return 0;
//}
//������ շת�����
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//	while (c=a%b)
//	{
//		//a%b=c    a%b=0ʱ��b�������Լ��
//	
//		a = b;
//		b = c;
//	}
//	printf("%d\n", b);
//	return 0;
//}
//��ҵ��  ��һ�� 1-100�������� �����˶��ٸ����� 9   �� ���磺19һ����99 ����
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)//��λ��9
//		{
//			count++;
//		}
//		if (i / 10 == 9)// ʮλ��9
//		{
//			count++;
//		}
//
//	}
//	printf("%d\n", count);
//	return 0;
//}
// ��ҵ��  ���� 1/1-1/2+1/3-1/4+����+1/99-1/100��ֵ
//����һ
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
// ������
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
//��ҵ��
// �ҳ�10�������е����ֵ
//int main()
//{
//	// ׼��10������
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10 };
//	// �ȼ������ֵ��arr[0]
//	int max = arr[0];
//	// ����ֵһ��һ����max �Ƚϣ���max����޸�max
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
// ��ҵ�� 
// ��ӡ99�˷���
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