#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#pragma warning( disable : 4996 )
#define enter 13
#define maximun 80
int main(void)
{
	FILE *fptr;
	char str[maximun], ch;
	int i = 0;
	fptr = fopen("D://output.txt", "a");
	printf("�п�J�r��A��enter�䵲����J:\n");
	while ((ch = getche()) != enter && i < maximun)
		str[i++] = ch;
	putc('\n', fptr);
	fwrite(str, sizeof(char), i, fptr);
	fclose(fptr);
	printf("\n�ɮת��[����!!\n");
	system("pause");
	return 0;
}