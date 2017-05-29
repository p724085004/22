#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
	void Sort(int *p);
	int a[10];
	int *p;
	p = a;
	srand(time(NULL));
	for (int i = 0; i < 10; ++i)
	 {
	 	a[i] = rand() % 101;
	 } 
	 printf("未排序前数组：");
	 for (int i = 0; i < 10; ++i)
	 {
	 	printf("%d ",a[i]);
	 }
	 printf("\n");
	 Sort(a);
	 printf("排序后的数组：");
	 for (int i = 0; i < 10; ++i)
	 {
	 	printf("%d ", a[i]);
	 }
	 printf("\n");


	return 0;
}
void Sort(int *p)
{
	int i,j,temp;
	for (int i = 0; i < 9; ++i)
	{
		for (int j = i; j < 10; ++j)
		{
			if (p[i] > p[j])
			{
				temp = p[i];
				p[i] = p[j];
				p[j] = temp;
			}
		}
	}
}