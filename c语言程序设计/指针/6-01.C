#include <stdio.h>

void Sort(int *i,int *j,int *k);
int main(void)
{
	int i,j,k;
	printf("请输入要排序的三个数（空格隔开）:\n");
	scanf("%d %d %d",&i,&j,&k);
	Sort(&i,&j,&k);
	printf("由小到大排序后三个数：%d,%d,%d\n",i,j,k);

	return 0;
}
void Sort(int *m,int *n,int *k)
{
	int temp;
	if(*m > *n)
	{
		temp = *m;
		*m = *n;
		*n = temp;
	}
	if(*m > *k)
	{
		temp = *m;
		*m = *k;
		*k = temp;
	}
	if(*n > *k)
	{
		temp = *n;
		*n = *k;
		*k = temp;
	}

}