#define _CRT_SECURE_NO_WARNINGS 1	
#include <stdio.h>
#include <stdlib.h>


int Count_One_Bits(unsigned int i)
{
	int count = 0;
	while (i)
	{
		i = i & (i - 1);
		count++;
	}
	return count;
}

int main()
{
	int m , n = 0;
	int i = 0;
	int ret = 0;
	printf("������������������ֵ:>");
	scanf("%d%d", &m, &n);
	printf("m = %5d , n = %5d\n", m, n);
	i = m^n;
	ret = Count_One_Bits(i);
	printf("m��n����%d��bit��ͬ\n", ret);
	system("pause");
	return 0;
}