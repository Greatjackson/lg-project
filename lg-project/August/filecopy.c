#include<stdio.h>
#include<stdlib.h>
int main(int argc, const char *argv[])
{
	FILE *fpsrc, *fpdest;
	char buf[4096];
	int len;

	if(argc != 3)
	{
		printf("./a.out src dest!\n");	
		exit(-1);
	}
	fpsrc = fopen(argv[1], "rb+");
	if(fpsrc == NULL)
	{
		perror("fopen src");
		exit(-1);
	}	
	fpdest = fopen(argv[2], "rb+");
	if(fpdest == NULL)
	{
		perror("fopen dest");
		exit(-1);
	}
	while(len = fread(buf, 1, sizeof(buf), fpsrc))
	{
		fwrite(buf, 1, len, fpdest);	        //1为元素单位 字节 len为元素长度
	}
	fclose(fpsrc);
	fclose(fpdest);
}

