#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TOTAL 10

int fact(int n);
int pow_n(int num, int pow);
int get_volume(int h, int w, int d);

int main(void) {


	//printf("%d", fact(4));
	//printf("%d", pow_n(2, 4));
	/*int h, w, d;
	scanf("%d %d %d", &h, &w, &d);
	int res = get_volume(h, w, d);
	printf("%d", res);*/




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