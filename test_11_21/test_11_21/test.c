#define  _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int num = 10;
//int main()
//{
//    int num = 1;
//    printf("num = %d\n", num);
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    printf("%d\n", strlen("c:\test\121"));
//    return 0;
//


/*
	牛客网
		BC18 计算带余除法
		描述
		给定两个整数a和b(0 < a, b < 10, 000)，计算a除以b的整数商和余数。
			输入描述：
			一行，包括两个整数a和b，依次为被除数和除数（不为零），中间用空格隔开。
			输出描述：
			一行，包含两个整数，依次为整数商和余数，中间用一个空格隔开。

			示例1
			输入：
			15 2
			复制
			输出：
			7 1
*/

//程序
#include <stdio.h>

int main()
{
    unsigned int a;
    int b;
    scanf("%d %d", &a, &b);
    int c = 0;
    int d = 0;
    c = a / b;
    d = a % b;
    printf("%d %d", c, d);
    return 0;
}

