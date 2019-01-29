#include <stdio.h>

int main() 
{
	printf("Загадайте число от 0 до 1023, я попытаюсь угадать.\n");
	printf("Отвечайте 1, если число больше.\n");
	printf("Отвечайте -1, если число меньше.\n");
	printf("Отвечайте 0, если число угадано.\n");
	int a = 0, b = 1023, c, ans;

	

	while (ans != 0) {
		printf("Мое число %d", c);
		scanf("%d", &ans);
		if (ans == 1) 
		    a = c;
	    else 
		    b = c;
		c = (a + b)/2;
	}
	
	printf("Я угадал :))");
	return 0;
}
