#include <stdio.h>
#include <ctype.h>

#define MAX 25

int main(int argc, char **argv)
{
	char  c, name[MAX];
	int i=0, sum=0;



	printf("Insert your name: ");

	for(i=0; (c = getchar()) != '\n' ;++i)
	{
		name[i] = c;
		if(isalpha(c))
			sum +=c;
	}
	name[i] = '\0';

	printf("\n%s%s%s\n%s",
		"Nice to meet you ",
		name,
		".",
		"Your name spelled backwards is ");



	for(i--; i >= 0; i--)
		putchar(name[i]);

	printf("\n%s%d%s\n%s\n\n",
		"and the sum of your letters are ",
		sum,
		".",
		"Have a nice day!");



}
