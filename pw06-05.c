// вариант - 4
#include <stdio.h>
int main() {
	int choice;
	double r, h, a, volume;
	const double PI = 3.1415926535;
	while (choice != 5) {
		printf("\n КАЛЬКУЛЯТОР ОБЪЕМА \n");
		printf("1. Сфера (по радиусу)\n");
		printf("2. Куб (по стороне)\n");
		printf("3. Цилиндр (по радиусу и высоте)\n");
		printf("4. Конус (по радиусу и высоте)\n");
		printf("5. Выход\n");
		printf("Выберите пункт меню: ");

		scanf("%d", &choice);
		if (choice < 1 || choice > 5) {
			printf("Ошибка: неверный номер пункта! Попробуйте снова.\n");
			continue;
		}
		switch (choice) {
			case 1:
				printf("Введите радиус сферы: ");
				scanf("%lf", &r);
				volume = (4.0 / 3.0) * PI * r * r * r;
				printf("Объем сферы: %.2f\n", volume);
				break;
			case 2:
				printf("Введите сторону куба: ");
				scanf("%lf", &a);
				volume = a * a * a;
				printf("Объем куба: %.2f\n", volume);
				break;
			case 3:
				printf("Введите радиус и высоту цилиндра через пробел: ");
				scanf("%lf %lf", &r, &h);
				volume = PI * r * r * h;
				printf("Объем цилиндра: %.2f\n", volume);
				break;
			case 4:
				printf("Введите радиус и высоту конуса через пробел: ");
				scanf("%lf %lf", &r, &h);
				volume = (1.0 / 3.0) * PI * r * r * h;
				printf("Объем конуса: %.2f\n", volume);
				break;
		}
	}
	return 0;
}
