extern void taskOne() {
	int a = 0;
	printf("������� ����� �:");
	scanf_s("%d", &a);
	if (a == 0 || a > 20) {
		printf("� ������ ���� < 20 � a !=0");
	}
	else {
		long long int answ = 1;
		for (int i = a; i <= 20; i++) {
			answ *= i;
		}

		printf("%lli", answ);
	}
}