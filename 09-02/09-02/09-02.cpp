#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int countSpace(char* str, int length)
{
	int count = 0;
	while ((*str) != '\0')
	{
		if (*str == ' ')
		{
			count++;
		}

		str++;
	}

	return count;

}


void replaceSpace(char* str, int length)
{
	int n =countSpace(str, length);
	int end1 = length - 1;
	int end2 = end1 + 2 * n;
	while (end1 != end2)
	{
		if (str[end1] != ' ')
		{
			str[end2] = str[end1];
			end1--;
			end2--;
		}
		else
		{
			str[end2] = '0'; end2--;
			str[end2] = '2'; end2--;
			str[end2] = '%';
			end2--;
			end1--;
		}
	}
}

int main()
{
	char arr[50] = "we are happy";
	replaceSpace(arr, 12);
	printf("%s\n", arr);
	return 0;
}