#include <stdio.h>
#include <string.h>

void Sort(char *i,char *j,char *k);
int main(void)
{
	char a[3][20];
	printf("������Ҫ����������ַ������س�������:\n");
	for (int i = 0; i < 3; ++i)
	{
		gets(a[i]);
	}
	Sort(*a,*(a + 1),*(a + 2));
	printf("�������ַ�����\n");
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