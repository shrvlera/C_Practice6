// вариант - 30
#include <stdio.h>

int main() {
	int circulation;
	double book_price;
	double total_cost;
	double stage1 = 0.0, stage2 = 0.0, stage3 = 0.0;
	double total_royalty;

	printf("Введите тираж книги: ");
	scanf("%d", &circulation);
	printf("Введите цену одной книги : ");
	scanf("%lf", &book_price);

	total_cost = circulation * book_price;

	if (circulation <= 10000.0) {
		stage1 = total_cost * 0.10;
	}
	else if (circulation <= 50000.0) {
		stage1 = (10000.0 * book_price) * 0.10;
		stage2 = ((circulation - 10000.0) * book_price) * 0.12;
	}
	else {
		stage1 = (10000.0 * book_price) * 0.10;
		stage2 = (40000.0 * book_price) * 0.12;
		stage3 = ((circulation - 50000.0) * book_price) * 0.15;
	}
	total_royalty = stage1 + stage2 + stage3;

	printf("Исходный тираж: %d экз.\n", circulation);
	printf("Цена книги: %.2f руб.\n", book_price);
	printf("Общая стоимость продаж: %.2f руб.\n", total_cost);
	printf("Ступень 1 (10%% от первых 10к книг): %.2f руб.\n", stage1);
	printf("Ступень 2 (12%% от книг свыше 10к до 50к): %.2f руб.\n", stage2);
	printf("Ступень 3 (15%% от книг свыше 50к): %.2f руб.\n", stage3);
	printf("\nИтоговая сумма роялти автора: %.2f руб.\n", total_royalty);
	return 0;
}
