#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TOTAL 10

int main(void) {

	char str[TOTAL][50], *p_sort[TOTAL];
	int count = 0;
	while (count < TOTAL && fgets(str[count], sizeof(str[0])-1, stdin))
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
		p_sort[i] = str[i];
	}

	for (int i = 0; i < count - 1; i++) {
		for (int j = 0; j < count - i - 1; i++) {
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

	return 0;
}