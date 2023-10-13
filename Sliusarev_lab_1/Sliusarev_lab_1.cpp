// Sliusarev_lab_1.cpp 
// 3. Перевести градусы Цельсия в Кельвина и выразить в Фаренгейтах.

#include <stdio.h>
#include <locale>

int main()
{
	setlocale(LC_ALL, "Rus");

	float a, b, c;

	printf_s("Введите кол-во градусов (в Цельсиях):\n");
	if (scanf_s(" %d", &a) != 1) {                          // Защита от неправильного ввода
		printf("Неверный ввод\n");
		return 0;
	}
	b = a + 273.15;							// Перевод в Кельвины
	c = a * 1.8 + 32;			// Перевод в Фаренгейты

	printf_s("\nF = %f",  c);



	return 0;
}
