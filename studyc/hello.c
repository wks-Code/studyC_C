#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("hello world! \n");

	
	{ //¸´ºÏÓï¾ä
		int b;
		char c1 = 'a';
		b = c1 >= 'A' && c1 <= 'Z';

		printf("b= %d \n",b);
	}
	system("pause");

	char c2;
	c2 = getchar();

	printf("Äã¸Õ²ÅÊäÈëµÄ×Ö·ûÎª£º%c \n", c2);

	system("pause");
	return 0;
}