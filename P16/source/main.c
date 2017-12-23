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
	printf("請輸入字串，按enter鍵結束輸入:\n");
	while ((ch = getche()) != enter && i < maximun)
		str[i++] = ch;
	putc('\n', fptr);
	fwrite(str, sizeof(char), i, fptr);
	fclose(fptr);
	printf("\n檔案附加完成!!\n");
	system("pause");
	return 0;
}