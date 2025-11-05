#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TOTAL 10

int fact(int n);
int pow_n(int num, int pow);
int get_volume(int h, int w, int d);
int is_triangle(int a, int b, int c);
double get_mean2(int a, int b);
int get_sum2(int a, int b);
int is_even(int n);
int is_range(double x, double a, double b);
double get_length(int a, int b);

int main(void) {


	//printf("%d", fact(4));
	//printf("%d", pow_n(2, 4));
	/*int h, w, d;
	scanf("%d %d %d", &h, &w, &d);
	int res = get_volume(h, w, d);
	printf("%d", res);*/
	/*char input[100];
	fgets(input, sizeof(input), stdin);
	int a, b, c;
	if (sscanf(input, "%d %d %d", &a, &b, &c) == 3) {
		printf("%d",is_triangle(a, b, c));
	}
	else puts("Нужно ввести три числа!");
	is_triangle(a, b, c);*/

	/*int a, b;
	char arr[100];
	fgets(arr, sizeof(arr), stdin);
	if (sscanf(arr, "%d %d", &a, &b) == 2) {
		printf("%.1f", get_mean2(a, b));
	}
	else puts("Нужно ввести два числа через пробел!");*/

	/*int a, b, c;
	char arr[100];
	fgets(arr, sizeof(arr), stdin);
	if (sscanf(arr, "%d %d %d", &a, &b, &c) == 3) {
		printf("%d", get_sum2(get_sum2(a, b), c));
	}
	else
	{
		puts("Нужно ввести три целых числа!");
	}*/

	/*int x;
	while (scanf("%d", &x) == 1) {
		if (is_even(x)) printf("%d ", x);
	}*/

	/*double x;
	while (scanf("%lf", &x) == 1) {
		if (!is_range(x, -2.5, 3.5)) printf("%.1f ", x);
	}*/

	int a, b;
	char arr[100];
	fgets(arr, sizeof(arr), stdin);
	if (sscanf(arr, "%d %d", &a, &b) == 2) {
		printf("%.2lf", get_length(a, b));
		return 0;
	}
	else puts("Please, enter two numbers!");

	/*char str[TOTAL][50], * p_sort[TOTAL];
	int count = 0;
	while (count < TOTAL && fgets(str[count], sizeof(str[0]) - 1, stdin))
	{
		char* ptr_n = strrchr(str[count], '\n');
		if (ptr_n != NULL)
			*ptr_n = '\0';
		count++;
	}

	for (int i = 0; i < count; i++) {
		p_sort[i] = str[i];
	}

	for (int i = 0; i < count - 1; i++) {
		for (int j = 0; j < count - i - 1; j++) {
			char* pos1 = strrchr(p_sort[j], ';');
			char* pos2 = strrchr(p_sort[j + 1], ';');

			double weight1 = atof(pos1 + 1);
			double weight2 = atof(pos2 + 1);

			if (weight1 < weight2) {
				char* temp = p_sort[j];
				p_sort[j] = p_sort[j + 1];
				p_sort[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < count; i++) {
		char* colon = strchr(p_sort[i], ':');
		for (char* p = p_sort[i]; p < colon; p++) {
			printf("%c", *p);
		}
		if (i < count - 1)
			printf(" ");
	}

	printf("\n");*/

	return 0;
}