#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include <time.h>
#include <windows.h>
#include <locale.h>
#include "task1.h"
#include "task2.h"
void main() {
	setlocale(LC_ALL, "Russian");
	int mode = 0;
	while (1) {
		printf("\n\t1 - first task;\n\t2 - second task\n");
		scanf_s("%d", &mode);
		if (mode == 1) {
			taskOne();
		}
		if (mode == 2) {
			taskTwo();
		}
	}
	system("pause");
}