#include <stdio.h>

void func1(void);

static int count = 10;

int main()
{
	while(count--){
		func1();
	}
	return 0;
}

void func1(void)
{
	static int thingy = 5;
	// auto int autoX = 5;
	thingy++;
	// autoX++; ???
	// printf("thingy为%d,count为%d,autoX为%d;\n",thingy,count,autoX);
	printf("thingy为%d,count为%d,autoX为;\n",thingy,count);
}