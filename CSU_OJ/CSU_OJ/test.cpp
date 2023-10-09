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
//1018修墙壁

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
//	while (scanf(" %d %d", &m, &n) != EOF >0)
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
//
//#include <stdio.h>
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int n = 5;
//	for (int j = 0; j < n; j++)
//	{
//		for (int i = 0; i < n - j; i++)
//		{
//			if (arr[j] <= arr[j + i])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + i];
//				arr[j + i] = tmp;
//			}
//			else
//				continue;
//
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	_Printf_format_string_
//	return 0;
//}

//****************************************
////1760 各位数之和
//
//#include <stdio.h>
//
//int main()
//{
//	int num = 0;
//	while (scanf(" %d", &num) != EOF)
//	{
//		int sum = 0;
//		while (num)
//		{
//			sum = sum + num % 10;
//			num = num / 10;
//		}
//		printf("%d\n", sum);
//	}
//	return 0;
//}

//****************************
//1759闰年
//#include <stdio.h>
//
//int main()
//{
//	int year = 0;
//	while (scanf("%d", &year) != EOF)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//		{
//			printf("YES\n");
//		}
//		else
//		{
//			printf("NO\n"); 
//		}
//	}
//	return 0;
//}

//******************************
//1726: 最小公倍数之和
//#include <stdio.h>
//
//int lcMutiple(int a, int b,int max)//返回a+b;否则返回0
//{
//	for (int i = 1; i < max; i++)
//	{
//		if (a*i%b == 0)
//		{
//			return a * i;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int n = 0;
//	while (scanf(" %d", &n) != EOF)
//	{
//		int ret = n;
//		
//		printf("%d\n", ret);
//	}
//	return 0;
//}

//*********************************

////1389: 去掉空格
//#include <stdio.h>
//
//int main()
//{
//	char str[80] = { 0 };
//
//	while (gets_s(str))
//	{
//		char* slow = str;
//		char* fast = str;
//		while (*fast != 0)
//		{
//			if (*fast == ' ')
//			{
//				while (*fast == ' ')
//				{
//					fast = fast + 1;
//				}
//				*slow = *fast;
//				slow++;
//				fast++;
//			}
//			else
//			{
//				*slow = *fast;
//				slow++;
//				fast++;
//			}
//		}
//		while (slow < fast)
//		{
//			*slow = '\0';
//			slow++;
//		}
//		printf(str);
//		printf("\n");
//
//		for (int i = 0; i < 80; i++)//重置str
//		{
//			str[i] = 0;
//		}
//	}
//	return 0;
//}

//********************************************

////1670: 22-循环-2-打印沙漏
//#include <stdio.h>
//
//int count(int n)
//{
//	//n层沙漏
//	return 2 * () - 1;
//}
//
//int main()
//{
//	int max = 0;
//	while (scanf("%d", &max) != EOF)
//	{
//
//
//
//	}
//
//	return 0;
//}


//**********************************
////1761 22-循环-1-输出图形
//
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int blank = 0;
//		for (int i = 1; i <= n; i++)
//		{
//			int tmp = blank;
//			if (i >= 10)
//			{
//				tmp--;
//			}
//			for (int j = 0; j < tmp; j++)
//			{
//				printf(" ");
//			}
//			printf("%d\n", i);
//			blank++;
//
//		}
//		printf("\n");
//
//	}
//
//	return 0;
//}

//*****************************
//1570: 熊二的梦想（10分）

//#include <stdio.h>
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	while (scanf("%d %d", &a, &b) != EOF)
//	{
//		double ma = (double)a;
//		double mb = (double) b;
//		int count = 0;
//		while (1)
//		{
//			ma *= 3.0;
//			mb *= 2.0;
//			count++;
//			if (ma > mb)
//			{
//				printf("%d\n", count);
//				break;
//			}
//		}
//	}
//}