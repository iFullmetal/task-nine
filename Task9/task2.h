char * settime(struct tm *u)
{
	char s[40];
	char *tmp;
	for (int i = 0; i<40; i++) s[i] = 0;
	int length = strftime(s, 40, "%d.%m.%Y %H:%M:%S, %A", u);
	tmp = (char*)malloc(sizeof(s));
	strcpy(tmp, s);
	return(tmp);
}
extern int taskTwo()
{
	while (1) {
		struct tm *u;
		char *f;
		system("cls");
		const time_t timer = time(NULL);
		u = localtime(&timer);
		f = settime(u);
		puts(f);
		Sleep(2000);
	}
}