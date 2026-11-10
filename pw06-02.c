// вариант - 18
#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	wint_t ch;
	int replacements = 0;

	while ((ch = getwchar()) != L'#') {
		if (ch == L'о') {
			replacements++;
			putwchar(L'0');
		} else {
			putwchar(ch);
		}
	}
	wprintf(L"\nКоличество замен: %d\n", replacements);
	return 0;
}
