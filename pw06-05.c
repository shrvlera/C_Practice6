// вариант - 4
#include <stdio.h>
int main() {
	int choice = 0;
	double r, h, a, volume;
	const double PI = 3.1415926535;
	int sw;
	int c;

	while (1) {
		printf("\n КАЛЬКУЛЯТОР ОБЪЕМА \n");
		printf("1. Сфера (по радиусу)\n");
		printf("2. Куб (по стороне)\n");
		printf("3. Цилиндр (по радиусу и высоте)\n");
		printf("4. Конус (по радиусу и высоте)\n");
		printf("5. Выход\n");
		printf("Выберите пункт меню: ");

		sw = scanf("%d", &choice);
		if (sw == EOF) {
			printf("\n встречен EOF\n");
			break;
		} else if (sw == 0) {
			printf("ошибка: введите число от 1 до 5\n");
			while ((c = getchar()) != '\n' && c != EOF);
			continue;
		}
		while ((c = getchar()) != '\n' && c != EOF);

		if (choice == 5) {
			break;
		}

		if (choice < 1 || choice > 5) {
			printf("ошибка: неверный номер пункта.\n");
			continue;
		}

		switch (choice) {
			case 1:
				printf("Введите радиус сферы: ");
				sw = scanf("%lf", &r);
				if (sw == EOF) return 0;
				if (sw == 0 || r <= 0) {
					printf("ошибка: радиус должен быть положительным числом\n");
					while ((c = getchar()) != '\n' && c != EOF);
					break;
				}
				while ((c = getchar()) != '\n' && c != EOF);
				volume = (4.0 / 3.0) * PI * r * r * r;
				printf("Объем сферы: %.2f\n", volume);
				break;
			case 2:
				printf("Введите сторону куба: ");
				sw = scanf("%lf", &a);
				if (sw == EOF) return 0;
				if (sw == 0 || a <= 0) {
					printf("ошибка: сторона должна быть положительным числом\n");
					while ((c = getchar()) != '\n' && c != EOF);
					break;
				}
				while ((c = getchar()) != '\n' && c != EOF);
				volume = a * a * a;
				printf("Объем куба: %.2f\n", volume);
				break;
			case 3:
				printf("Введите радиус и высоту цилиндра через пробел: ");
				sw = scanf("%lf %lf", &r, &h);
				if (sw == EOF) return 0;
				if (sw != 2 || r <= 0 || h <= 0) {
					printf("ошибка радиус и высота должны быть положительными числами\n");
					while ((c = getchar()) != '\n' && c != EOF);
					break;
				}
				while ((c = getchar()) != '\n' && c != EOF);
				volume = PI * r * r * h;
				printf("Объем цилиндра: %.2f\n", volume);
				break;
			case 4:
				printf("Введите радиус и высоту конуса через пробел: ");
				sw = scanf("%lf %lf", &r, &h);
				if (sw == EOF) return 0;
				if (sw != 2 || r <= 0 || h <= 0) {
					printf("ошибка: радиус и высота должны быть положительными числами\n");
					while ((c = getchar()) != '\n' && c != EOF);
					break;
				}
				while ((c = getchar()) != '\n' && c != EOF);
				volume = (1.0 / 3.0) * PI * r * r * h;
				printf("Объем конуса: %.2f\n", volume);
				break;
		}
	}
	return 0;
}
