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
	if (!(a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z'))
	{
		printf("error");
		return 0;
	}
	while (arr[i] != '\0')
	{
		if (arr[i] >= 'a' && arr[i] <= 'z' || arr[i] >= 'A' && arr[i] <= 'Z')
		{
			if (arr[i] == a || arr[i] == a + 32 || arr[i] == a - 32)
			{
				j++;
			}
		}
		else
		{
			printf("error");
			return 0;
		}
		i++;
	}
	printf("%d", j);
	return 0;
}