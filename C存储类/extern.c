#include <stdio.h>

int count ;
extern void write_extern();

int main()
{
	count = 7;
	// printf("count is %d\n",count);
	write_extern();
}

