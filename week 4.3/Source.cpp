#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<conio.h>

int main()
{
	char arr[10000];
	char a;
	int i = 0;
	int j = 0;
	scanf("%[^\n]", arr);
	a = _getch();
	printf("%c\n", a);
	while (arr[i] != '\0')
	{
		if (arr[i] == a)
		{
			j++;
		}
		i++;
	}
	printf("%d", j);
	return 0;
}