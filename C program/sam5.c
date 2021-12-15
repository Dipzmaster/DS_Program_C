#include<stdio.h>
int* abc(int *a)
{
	*a++;
	return &a;
}
int main()
{
	int a=5;
	int *b;
	int (*ptr)();
	ptr=&abc;
	b=ptr(&a);
	printf("%d",++a);
	return 0;
}



