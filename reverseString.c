#include "stdio.h"


void reverse(char *str)
{
	char *end = str;
	char tmp;
	if(str) {
		while(*end) {
			++end;
		}
		--end;
		--end;

		/*swap*/

		while(str < end) {
			tmp = *str;
			*str++ = *end;
			*end-- = tmp;
		}

	}

}

int main(int argc, char const *argv[])
{

	// int a = 'a' - 'a';
	// int z = 'z' - 'a';

	// printf("a: %d\n", a);
	// printf("z: %d\n", z);

	char string[20];
	fputs("enter some text: ", stdout);
	fflush(stdout); /* http://c-faq.com/stdio/fflush.html */
	fgets(string, sizeof string, stdin);
	printf("string before = %s\n", string);

	reverse(string);
	printf("string after = %s\n", string);

	return 0;
}