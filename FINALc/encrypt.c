#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *str1;
	FILE *str2;
	char filename[100];
	char c;
	int key = 0;
	int i;

	printf("Enter the filename to open for read\n");
	scanf("%s", filename);
	str1 = fopen(filename, "rb");

	if(str1 == NULL)
	{
		printf("Cannot open file");
		exit(0);
	}

	printf("Enter the filename to open for writing\n");
	scanf("%s",filename);
	str2 = fopen(filename, "wb");

	if(str2 == NULL)
	{
		printf("Cannot open file");
		exit(0);
	}

	c = fgetc(str1);

	for(c = fgetc(str1); c != EOF; c = fgetc(str1))
	{
		c[i] << key;
		fputc(c,str2);
		if(key > 0)
		{
			key = (key -1) % 256;
		}
		else
		{
			key = 255;
		}
		key = key - 1;
	}
	
	fclose(str1);
	fclose(str2);
	return 0;
}
