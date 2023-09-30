#define  _CRT_SECURE_NO_WARNINGS 1


//****************************
////打印个猩猩-1001
//#include <stdio.h>
//
//int main(){
//    int count = 1;
//    int n = 0;
//    //输入
//    
//    while (scanf(" %d", &n) != EOF)
//    {
//        if (count == 1)
//        {
//            for (int j = 0; j < n; j++) {
//                printf("*");
//            }
//            printf("\n");
//        }
//        else {
//            printf("\n");
//
//            for (int k = 0; k < n; k++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//        count++;
//    }
//    return 0;
//}

//-*************************

////1000数组排序
//
//#include <stdio.h>
//
//
//int main() {
//	int n = 0;
//	int count = 0;
//	while (scanf(" %d", &n)!=EOF)
//	{
//		count++;
//		int arr[100] = { -1 };
//		//接受数组
//		for (int i = 0; i < n; i++)
//		{
//			scanf(" %d", arr + i);
//		}
//		//冒泡排序
//		for (int i = 0; i < n - 1; i++)
//		{
//			for (int j = i; j < n - 1; j++)
//			{
//				if (arr[j] > arr[j + 1])
//				{
//					int tmp = arr[j];
//					arr[j] = arr[j + 1];
//					arr[j + 1] = tmp;
//				}
//			}
//		}
//
//		if (count != 1)printf("\n");
//		printf("%d", arr[0]);
//		for (int i = 1; i < n; i++)
//		{
//			printf(" %d", arr[i]);
//		}
//	}
//	return 0;
//}

//*****************************

//1008八进制数
//#include <stdio.h>
//
//int main()
//{
//	int count = 0;
//	int num = 0;
//	while (scanf(" %d", &num) != EOF)
//	{
//		count++;
//		if (count > 1)printf("\n");
//		int ret = 0;
//		int ming = 1;
//		while (num)
//		{
//			ret = ret + num % 8 * ming;
//			ming *= 10;
//			num /= 8;
//		}
//		printf("%d", ret);
//	}
//
//	return 0;
//}

//1013-美丽数
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	while (scanf(" %d", &n) != EOF)
//	{
//		int count = 0;
//		while()
//	}
//	return 0;
//}

//******************
//1014 水陆距离



//******************
//1026回文素数
//
//#include <stdio.h>
//#include <math.h>
//
//int is_primer(int x)
//{
//	if (x <= 1) return 0;
//	for (int i = 2; i <= sqrt(x); i++)
//	{
//		if (x % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int is_palindrome(int num)
//{
//	int tmp = num;
//	int reverse_int = 0;
//	
//	//倒置
//	while (tmp)
//	{
//		reverse_int = tmp % 10 + reverse_int * 10;
//		tmp /= 10;
//	}
//	if (num == reverse_int) return 1;
//	else return 0;
//}
//
//int main()
//{
//	int L = 0;
//	int R = 0;
//	int cycle_count = 1;
//	while (scanf(" %d %d", &L, &R) != EOF)
//	{
//		if (cycle_count > 1) printf("\n"); 
//		int count = 0;
//		for (int i = L; i <= R; i++)
//		{
//			int ret1 = is_primer(i);
//			int ret2 = is_palindrome(i);
//			if (ret1 && ret2) count++;
//		}
//		printf("%d", count);
//		cycle_count++;
//	}
//	return 0;
//}

//*******************************
////test
//
//#include <stdio.h>
//
//int x = 256;
//char x = 2;
//int main()
//{
//
//	printf("%d", x);
//
//
//	return 0;
//}

//*****************************
////1103回文数
//#include <stdio.h>
//
//int main()
//{
//	int num = 0;
//	while (scanf(" %d", &num) != EOF)
//	{
//
//	}
//	return 0;
//}

//*************************
////1018修墙壁
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int cmp_int(const void* e1,const void* e2)
//{
//	return *(int*)e2 - *(int*)e1;
//}
//
//int main()
//{	
//	int m = 0;
//	int n = 0;
//	while (scanf(" %d %d", &m, &n) != EOF)
//	{
//		if (m == 0)
//		{
//			break;
//		}
//		int arr[1000] = {0};
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d",arr+i );
//		}
//
//		qsort(arr, n, sizeof(int), cmp_int);
//
//
//		int count = 0;
//		int sum = 0;
//		for (int i = 0; i < n; i++)
//		{
//			sum += arr[i];
//			count++;
//			if (sum >= m)
//			{
//				break;
//			}
//		}
//		if (sum >= m)
//		{
//			printf("%d\n", count);
//		}
//		else {
//			printf("impossible\n");
//		}
//	}
//
//
//	return 0;
//}

#include <stdio.h>

int main()
{
	int arr[] = { 1,2,3,4,5 };
	int n = 5;
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < n - j; i++)
		{
			if (arr[j] <= arr[j + i])
			{
				int tmp = arr[j];
				arr[j] = arr[j + i];
				arr[j + i] = tmp;
			}
			else
				continue;

		}
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	_Printf_format_string_
	return 0;
}