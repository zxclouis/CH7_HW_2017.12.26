#include <stdio.h>
#include <stdlib.h>
#pragma warning( disable : 4996 )
int main(void)
{
	FILE *fptr1,*fptr2;
	char ch;
	int count = 0;
	fptr1 = fopen("D://welcome.txt", "r");//��r�ɦbD��
	fptr2 = fopen("D://output.txt", "w");//��r�ɦbD��
	if ((fptr1 != NULL) && (fptr2!=NULL))
	{
		while ((ch = getc(fptr1)) != EOF)
		putc(ch, fptr2);
		fclose(fptr1);
		fclose(fptr2);
		printf("�ɮ׫�������!!\n");
	}
	else
		printf("�ɮ׶}�ҥ���!!\n");
	system("pause");
	return 0;
}
