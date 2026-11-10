// вариант - 24
#include <stdio.h>
int main() {
	int num;
	int t_count = 0;
	int other_count = 0;
	int t_sum = 0;
	int other_sum = 0;
	while (scanf("%d", &num) == 1 && num != 0) {
		int sum = 0;
		int i = 1;
		while (sum < num) {
			sum += i;
			i++;
		}

		if (sum == num && num > 0) {
			t_count++;
			t_sum += num;
		} else {
			other_count++;
			other_sum += num;
		}
	}
	if (t_count > 0) {
		double average = (double)t_sum / t_count;
		printf("Количество треугольных чисел: %d, их среднее: %.2f\n", t_count, average);
	} else
		printf("Количество треугольных чисел: %d, их среднее: 0.00\n", t_count);

	if (other_count > 0) {
		double average = (double)other_sum / other_count;
		printf("Количество остальных чисел: %d, их среднее: %.2f\n", other_count, average);
	} else
		printf("Количество остальных чисел: %d, their среднее: 0.00\n", other_count);
	return 0;
}
