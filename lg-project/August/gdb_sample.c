#include<stdio.h>
void println(const char* pmsg)
{
	printf("%s\n",pmsg);
	printf("hello world!\n");

}
int main(int argc, char *argv[])
{
	println("hello gdb");
	return 0;
}
