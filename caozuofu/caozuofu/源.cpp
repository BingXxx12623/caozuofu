//#include<stdlib.h>
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 0;
//	printf("%d", a / b);
//	system("pause");
//	return 0;
//}
//��λ�����
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int num = 4;
//	//<<�������Ҫ�ƶ���λ��,������������Ҫ��num����һλ
//	//���ǵ���д��ʽ����num<<1
//	num = num << 1;
//	printf("%d", num);
//	system("pause");
//	return 0;
//}
////����λ�������ƶ���λ��Ϊ����λʱ
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int num = 10;
//	num = num >> -1;
//	printf("%d", num);
//	system("pause");
//	return 0;
//}
//�����&
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a = 1;
//	int b = 2;
//	printf("%d", a&b);
//	system("pause");
//	return 0;
//}
//��λ��(|)
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a = 1;
//	int b = 2;
//	printf("%d", a ^ b);
//	system("pause");
//	return 0;
//}
//��һ�������ж�����1�ĸ���
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int Ppp(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		//Ҫ�������������1�ĸ������ǵ��������2��ģΪ1ʱ
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		//Ȼ������һλ,���������ж�
//		n = n >> 1;
//	}
//	return count;
//}
//int main()
//{
//	int n =-10;
//	printf("%d", Ppp(n));
//	system("pause");
//	return 0;
//}
//����2,��һ�������ж�����1 �ĸ���
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int Ppp(int n)
//{
//	//����һ��Ppp()�������ж϶�����1�ĸ���
//	int count = 0;
//	//�˴�����һ��forѭ��,��Ϊn��һ��Int�ͱ���,�������ֵҲ���ᳬ��32λ,����д�����forѭ��
//	for (int i = 0; i <32; i++)
//	{
//		//�˴����ж������Ǳ�����Ĺؼ�
//		//��Ҫʹ�õ���λ�����е���(&)����
//		//Ȼ����ÿ����i����һλ,�ж�����n���а�λ������Ľ���Ƿ�Ϊ0
//		//����Ϊ0,��count++,�������Ǿ����n��������ÿһλ��1�ĸ���
//		if (n & (1<<i))
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	printf("����������Ҫ�������:");
//	scanf("%d", &n);
//	//�˴�����һ��Ppp()�����������ж�
//	int ret = Ppp(n);
//	printf("ret=%d", ret);
//	system("pause");
//	return 0;
//}
//����3
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int Ppp(int n)
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}
int main()
{
	int n = 0;
	printf("��������Ҫ���������:");
	scanf("%d", n);
	int ret = Ppp(n);
	printf("%d", ret);
	system("pause");
	return 0;
}