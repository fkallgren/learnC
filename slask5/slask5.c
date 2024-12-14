#include <stdio.h>
#include <string.h>


#define MAX 100

int main(int argc, char *argv[])
{
	char c = 'a', *p, s[MAX];


	p = &c;

	printf("%c%c%c  \n\n ", *p, *p+1, *p+2);
	
	strcpy(s,"ABC");
	printf("%s %c%c%s\n\n", s,*s+6,*s+7,s+1);

	strcpy(s, "she sells sea shells by the sea shore");

	printf("%s\n",s+101);


}
