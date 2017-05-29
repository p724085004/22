#include <stdio.h>
#include <string.h>

void Sort(char *i,char *j,char *k);
int main(void)
{
	char a[3][20];
	printf("请输入要排序的三个字符串（回车结束）:\n");
	for (int i = 0; i < 3; ++i)
	{
		gets(a[i]);
	}
	for (int i = 0; i < 3; ++i)
	{
		puts(a[i]);
	}
	Sort(*a,*(a + 1),*(a + 2));
	printf("排序后的字符串：\n");
	for (int i = 0; i < 3; ++i)
	{
		printf("%s ",a[i] );
	}
	printf("\n");

	return 0;
}
void Sort(char *m,char *n,char *k)
{
	char temp[20];
	if(strcmp(m,n) > 0)
	{
		strcpy(temp,m);
		strcpy(m,n);
		strcpy(n,temp);
	}
	if(strcmp(m,k) > 0)
	{
		strcpy(temp,m);
		strcpy(m,k);
		strcpy(k,temp);
	}
	if(strcmp(n,k) > 0)
	{
		strcpy(temp,n);
		strcpy(n,k);
		strcpy(k,temp);
	}
	return ;
}