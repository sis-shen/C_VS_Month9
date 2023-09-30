#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int height, length, width	;

	height = 8;
	width = 10;
	length = 12;
	int volume = height * width * length;
	int weight = (volume + 165) / 165;
	printf("Diemensions:%dx%dx%d\n", length, width, height);
	printf("Volume(cubic inches): %d\n", volume);
	printf("Dimensional weight(pounds):%d\n", weight);

	return 0;
}