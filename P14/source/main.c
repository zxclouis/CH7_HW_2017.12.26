#include <stdio.h>
#include <stdlib.h>
#pragma warning( disable : 4996 )
int main(void)
{
	FILE *fptr;
	char ch;
	int count = 0;
	fptr = fopen("D://welcome.txt", "r");//��r�ɦbD��
	if (fptr != NULL)
	{
		while ((ch = getc(fptr)) != EOF)
		{
			printf("%c", ch);
			count++;
		}
		fclose(fptr);
		printf("\n�`�@��%d�Ӧr��\n", count);
	}
	else
	printf("�ɮ׶}�ҥ���!!\n");
	system("pause");
	return 0;
}
