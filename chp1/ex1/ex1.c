#include <stdio.h>



int main(int argc, char *argv[])
{
	
	char s[] = "She sells sea shells by the sea shore\0";
	int i,size=0;

	printf("%s\n",s);

	for(i=0;s[i]!='\0';i++)
	{
		printf("%c", s[i]);
		size++;
	}

	printf("%s%d%s\n",
		"Size of the sentence: ",
		size,".");
	
	printf("First letter: %c - Last letter: %c\n", s[0],s[size-1]);
}
