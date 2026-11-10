// вариант - 29
#include <stdio.h>

int main() {
	int ch;
	int prime_count = 0;
	printf("Введите текст (для окончания ввода нажмите '#'):\n");
	ch = getchar();
	while (ch != '#') {
		if (ch > 1) {
			int is_prime = 1;
			for (int i = 2; i * i <= ch; i++) {
				if (ch % i == 0) {
					is_prime = 0;
					break;
				}
			}

			if (is_prime == 1)
				prime_count++;
		}

		ch = getchar();
	}
printf("Количество символом,чей ASCII-код является простым числом: %d\n", prime_count);
return 0;
}
