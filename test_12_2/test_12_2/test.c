#define  _CRT_SECURE_NO_WARNINGS 1




//写代码将三个整数数按从大到小输出。
//
//例如：
//
//输入：2 3 1
//
//输出：3 2 1

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b)
//	{
//		if (b > c)
//		{
//			printf("%d %d %d", a, b, c);
//		}
//		else
//		{
//			printf("%d %d %d", a, c, b);
//		}
//	}
//	else if (a > c)
//	{
//		printf("%d %d %d", b, a, c);
//	}
//	else if (b > c)
//	{
//		printf("%d %d %d", b, c, a);
//	}
//	else
//	{
//		printf("%d %d %d", c, b, a);
//	}
//
//	return 0;
//}


//描述
//KiKi想知道已经给出的三条边a，b，c能否构成三角形，如果能构成三角形，判断三角形的类型（等边三角形、等腰三角形或普通三角形）。
//输入描述：
//题目有多组输入数据，每一行输入三个a，b，c(0 < a, b, c < 1000)，作为三角形的三个边，用空格分隔。
//输出描述：
//针对每组输入数据，输出占一行，如果能构成三角形，等边三角形则输出“Equilateral triangle!”，
//等腰三角形则输出“Isosceles triangle!”，其余的三角形则输出“Ordinary triangle!”，反之输出“Not a triangle!”。

//#include <stdio.h>
//
//int main()
//{
//    float a = 0;
//    float b = 0;
//    float c = 0;
//    while (scanf("%f%f%f", &a, &b, &c) == 3)
//    {
//        if (a > 0 && a < 1000 && b>0 && b < 1000 && c>0 && c < 1000)
//        {
//            if (a + b > c && a + c > b && b + c > a)
//            {
//                if (a == b && a == c)
//                {
//                    printf("Equilateral triangle!\n");
//                }
//                else if (a == b || a == c || b == c)
//                {
//                    printf("Isosceles triangle!\n");
//                }
//                else
//                {
//                    printf("Ordinary triangle!\n");
//                }
//
//            }
//            else
//            {
//                printf("Not a triangle!\n");
//            }
//
//        }
//    }
//    return 0;
//}

//问题
//1.或的操作符是||，我写成了or
//2.两数相等的比较操作符是==，我写成了赋值=
//3.没有换行打印


//计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值，打印出结果
//#include <stdio.h>
//
//int main()
//{
//	float sum1 = 0;
//	float sum2 = 0;
//	float sum = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//		{
//			sum1 = sum1 + 1.0 / i;
//		}
//		else
//		{
//			sum2 = sum2 + 1.0 / i;
//		}
//	}
//	sum = sum1 - sum2;
//	printf("%f", sum);
//	return 0;
//}

//忘记用浮点数定义函数sum
//忘记用1.0 / i 得到浮点数。


//编写程序数一下 1到 100 的所有整数中出现多少个数字9
// 
//#include <stdio.h>
//
//int main()
//{
//	int i = 1;
//	int sum = 0;
//	for (i; i <= 100; i++)
//	{
//		if (i % 10 == 9 || i / 10 == 9)
//		{
//			sum += 1;
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}


//打印1000年到2000年之间的闰年

//#include <stdio.h>
//
//int main()
//{
//	int y = 1000;
//	for (y; y <= 2000; y++)
//	{
//		if (y % 4 == 0 && y % 100 != 0)
//		{
//			printf("%d ", y);
//		}
//		else if (y % 400 == 0 && y % 100 != 0)
//		{
//			printf("%d ", y);
//		}
//	}
//	return 0;
//}



//求10 个整数中最大值

#include <stdio.h>

int main()
{
	int num0 = 0;
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int num4 = 0;
	int num5 = 0;
	int num6 = 0;
	int num7 = 0;
	int num8 = 0;
	int num9 = 0;
	int MAX = 0;
	scanf("%d%d%d%d%d%d%d%d%d%d", &num0, &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9);
	MAX = num0 > num1 ? num0 : num1;
	MAX = MAX > num2 ? MAX : num2;
	MAX = MAX > num3 ? MAX : num3;
	MAX = MAX > num4 ? MAX : num4;
	MAX = MAX > num5 ? MAX : num5;
	MAX = MAX > num6 ? MAX : num6;
	MAX = MAX > num7 ? MAX : num7;
	MAX = MAX > num8 ? MAX : num8;
	MAX = MAX > num9 ? MAX : num9;
	printf("%d", MAX);
	return 0;

//考虑使用条件操作符

//条件操作符也叫三目操作符，需要接受三个操作数的，形式如下：
//	 exp1 ? exp2 : exp3
//条件操作符的计算逻辑是：	如果exp1 为真， exp2 计算，计算的结果是整个表达式的结果；
//							如果exp1 为假， exp3 计算，计算的结果是整个表达式的结果。
}