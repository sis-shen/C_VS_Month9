#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n))
//	{
//		//��n��
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n - i; j++)
//			{
//				printf("  ");
//			}
//			for (j = 0; j <= i; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//
//
//
//		//��n+1��
//		for (i = 0; i < n+1; i++)
//		{
//			for (j = 0; j <  i; j++)
//			{
//				printf("  ");
//			}
//			for (j = 0; j <=n+1- i; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	int score = 0;
//	int count = 0;
//	int min = 100;
//	int max = 0;
//	int sum = 0;
//	while (scanf("%d", &score) == 1)
//	{
//		count++;
//		if (score > max)
//		{
//			max = score;
//		}
//		if (score < min)
//		{
//			min = score;
//		}
//
//		sum += score;
//		if (count == 7)
//		{
//			printf("%.2lf\n", (sum - min - max) / 5.0);
//			count = 0;
//			max = 0;
//			min = 100;
//		}
//
//	}
//	return 0;
//}

//void find_single_dog(int sz, char arr[], int* pd1, int* pd2)
//{
//	*pd1 = 0;
//	*pd2 = 0;
//	int ret = 0;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];
//
//	}
//	int pos = 0;
//	for (pos = 0; pos < 32; pos++)
//	{
//		if (((ret >> pos) & 1) == 1)
//		{
//			break;
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> pos) & 1) == 1)
//		{
//			*pd1 ^= arr[i];
//		}
//		else
//		{
//			*pd2 ^= arr[i];
//		}
//	}
//
//
//}
//
//
//
//
//int main()
//{	
//	//�ҳ���������
//	char arr[] = { 1,2,3,4,5,1,2,3,4,6 };
//
//	//����
//	//1.�����������
//	//2.�ҳ��������������һλΪ1 -n
//	//3.�Ե�nλΪ1��һ�� ��nλΪ0 ��һ��
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int dog1 = 0;
//	int dog2 = 0;
//
//	find_single_dog(sz, arr, &dog1, &dog2);
//
//	printf("%d %d", dog1, dog2);
//
//	return 0;
//}

#include <stdlib.h>
#include <assert.h>
#include <ctype.h>
#include <limits.h>

enum Status {
	VALID,
	INVALID,
};

enum Status sta = INVALID;
int my_atoi(const char* str )
{
	int flag = 1;
	assert(str);
	if (*str == '\0')
		return 0;
	while (isspace(*str))
	{
		str++;
	}
	if (*str == '+')
	{
		flag = 1;
		str++;
	}
	else if(*str == '-')
	{
		flag = -1;
		str++;
	}
	long long ret = 0;
	while (*str)
	{
		if (isdigit(*str))
		{
			ret = ret * 10 + flag * (*str - '0');
			//�ж�Խ��
			if (ret > INT_MAX || ret < INT_MIN)
			{
				return 0;
			}
			str++;
		}
		else
		{
			return (int)ret;
		}

	}


	sta = VALID;
	return (int) ret ;
}



int main()
{
	char arr[20] = "-123abc456";
	int ret = my_atoi(arr);
	if (sta == INVALID)
	{
		printf("�Ƿ�����:%d\n", ret);
	}
	else
	{
		printf("�Ϸ�����:%d\n", ret);
	}
	printf("%d", ret);
	return 0;
}