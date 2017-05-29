#include <stdio.h>

int a[3][4];
int i,j;
int x;

int Count(int (*p)[4]);
int main(void)
{
	printf("请输入3行4列数组所有元素（空格隔开）：\n");
	for(i = 0;i < 3;i++)
		for(j = 0;j < 4;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("输入的数组为:\n");
		for(i = 0;i < 3;i++)
		{
			for(j = 0;j < 4;j++)
			{
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
		x = Count(a);
		printf("周边元素和为:%d\n",x);
		
		return 0;
}
int Count(int (*p)[4])
{
	int j,m = 0;
	
	for(j = 0;j < 4;j++)
		m += *(*(p+0) + j);
	m += *(*(p+1)+0);
	m += *(*(p+1)+3);
	for(j = 0;j < 4;j++)
		m += *(*(p+2)+j);

	return m;
}