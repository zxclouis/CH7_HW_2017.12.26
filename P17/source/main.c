#include <stdio.h>
#include <stdlib.h>
#pragma warning( disable : 4996 )
#define maximun 80
int main(void)
{
	FILE *fptr;
	char str[maximun];
	int bytes;
	fptr = fopen("D://output.txt", "r");
	while (!feof(fptr))
	{
		bytes = fread(str, sizeof(char), maximun - 1, fptr);
		str[bytes] = '\0';
		printf("%s\n", str);
	}
	fclose(fptr);
	system("pause");
	return 0;
}