#define  _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//    int num = 0;
//    while (scanf("%d", &num) == 1)
//    {
//        if (140 <= num)
//        {
//            printf("Genius");
//        }
//    }
//
//    return 0;
//}

//问题：对scanf的返回值遗忘

#include <stdio.h>

int main()
{
    long long a = 0;
    long long b = 0;
    while (scanf("%lld %lld", &a, &b) == 2)
    {
        if (a > b)
        {
            printf("%lld>%lld\n", a, b);
        }
        else if (a == b)
        {
            printf("%lld=%lld\n", a, b);
        }
        else
        {
            printf("%lld<%lld\n", a, b);
        }
    }
    return 0;
}

//问题：对数据类型长度遗忘，还有printf函数占位符的使用。以及\n换行符忘记使用。