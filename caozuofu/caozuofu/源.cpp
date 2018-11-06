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
//移位运算符
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int num = 4;
//	//<<后面跟上要移动的位数,比如下面我们要将num左移一位
//	//我们的书写方式就是num<<1
//	num = num << 1;
//	printf("%d", num);
//	system("pause");
//	return 0;
//}
////当移位操作符移动的位数为负数位时
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
//与操作&
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
//按位或(|)
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
//求一个数字中二进制1的个数
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int Ppp(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		//要求这个数二进制1的个数就是当这个数拿2求模为1时
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		//然后右移一位,继续进行判断
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
//方法2,求一个数字中二进制1 的个数
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int Ppp(int n)
//{
//	//创建一个Ppp()函数来判断二进制1的个数
//	int count = 0;
//	//此处创建一个for循环,因为n是一个Int型变量,它的最大值也不会超过32位,所以写出这个for循环
//	for (int i = 0; i <32; i++)
//	{
//		//此处的判断条件是本程序的关键
//		//需要使用到按位运算中的与(&)运算
//		//然后我每次让i左移一位,判断其与n进行按位与运算的结果是否不为0
//		//若不为0,就count++,这样我们就求出n二进制下每一位上1的个数
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
//	printf("请您输入您要求的数字:");
//	scanf("%d", &n);
//	//此处调用一下Ppp()函数来进行判断
//	int ret = Ppp(n);
//	printf("ret=%d", ret);
//	system("pause");
//	return 0;
//}
//方法3
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
	printf("请输入您要计算的数字:");
	scanf("%d", n);
	int ret = Ppp(n);
	printf("%d", ret);
	system("pause");
	return 0;
}