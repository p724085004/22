#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
	void Sort(int a[]);
	int a[10];
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
void Sort(int a[])
{
	int i,j,temp;
	for (int i = 0; i < 9; ++i)
	{
		for (int j = i; j < 10; ++j)
		{
			if (a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}