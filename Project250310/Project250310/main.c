#define  _CRT_SECURE_NO_WARNINGS 1

//代码1
//#include <stdio.h>
//int main()
//{
//	int n = 0x11223344;
//	int* pi = &n;
//	*pi = 0;
//	return 0;
//}

//代码2
//#include <stdio.h>
//int main()
//{
//	int n = 0x11223344;
//	char* pc = (char*)&n;
//	*pc = 0;
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char* pc = &a;
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	void* pa = &a;
//	void* pc = &a;
//	//*pa = 10;
//	//*pc = 0;
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int m = 0;
//	m = 20;//m是可以修改的
//	const int n = 0;
//	n = 20;//n是不能被修改的
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	const int n = 0;
//	printf("n = %d\n", n);
//	int* p = &n;
//	*p = 20;
//	printf("n = %d\n", n);
//	return 0;
//}


//#include <stdio.h>
////代码1
//void test1()
//{
//	int n = 10;
//	int m = 20;
//	int* p = &n;
//	*p = 20;//ok?
//	p = &m; //ok?
//}
//void test2()
//{
//	//代码2
//	int n = 10;
//	int m = 20;
//	const int* p = &n;
//	*p = 20;//ok?
//	p = &m; //ok?
//}
//void test3()
//{
//	int n = 10;
//	int m = 20;
//	int* const p = &n;
//	*p = 20; //ok?
//	p = &m; //ok?
//}
//void test4()
//{
//	int n = 10;
//	int m = 20;
//	int const* const p = &n;
//	*p = 20; //ok?
//	p = &m; //ok?
//}
//int main()
//{
//	//测试⽆const修饰的情况
//	test1();
//	//测试const放在*的左边情况
//	test2();
//	//测试const放在*的右边情况
//	test3();
//	//测试*的左右两边都有const
//	test4();
//	return 0;
//}

//#include <stdio.h>
////指针+- 整数
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = &arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));//p+i 这⾥就是指针+整数
//	}
//	return 0;
//}

////指针-指针
//#include <stdio.h>
//int my_strlen(char* s)
//{
//	char* p = s;
//	while (*p != '\0')
//		p++;
//	return p - s;
//}
//int main()
//{
//	printf("%d\n", my_strlen("abc"));
//	return 0;
//}

////指针的关系运算
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = &arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	while (p < arr + sz) //指针的⼤⼩⽐较
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int* p;//局部变量指针未初始化，默认为随机值
//	*p = 20;
//	return 0;
//}

#include <stdio.h>
int main()
{
	int arr[10] = { 0 };
	int *p = &arr[0];
	int i = 0;
	for (i = 0; i <= 10; i++)
	{
		//当指针指向的范围超出数组arr的范围时，p就是野指针
		*(p++) = i;
	}
	return 0;
}