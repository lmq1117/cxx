#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{

	printf("int 存储大小：%lu \n", sizeof(int));
	printf("char 存储大小：%lu \n", sizeof(char));
	printf("signed char 存储大小：%lu \n", sizeof(signed char));
	printf("unsigned intr 存储大小：%lu \n", sizeof(unsigned int));
	printf("short 存储大小：%lu \n", sizeof(short));
	printf("unsigned short 存储大小：%lu \n", sizeof(unsigned short));
	printf("long 存储大小：%lu \n", sizeof(long));
	printf("unsigned long 存储大小：%lu \n", sizeof(unsigned long));


	printf("float 存储大小：%lu \n", sizeof(float));
	printf("double 存储大小：%lu \n", sizeof(double));
	printf("long double 存储大小：%lu \n", sizeof(long double));

	printf("float 最大值：%E \n", FLT_MAX);
	printf("float 最小值：%E \n", FLT_MIN);
	printf("float 精度值：%d \n", FLT_DIG);

	return 0;
}