#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct student
{
	char name[20];
	int id;
	char sex;
	int score;
}STU;

int p_name(STU stud)
{
	printf("the name is %s", stud.name);
	return 0;
}
int main(int argc, const char *argv[])
{
	STU student;
    char buf[100];
	int (*p[4])(student) = {p_name};				  
	int num = 0;

	printf("please input the id name sex:\n");
	fgets(buf, sizeof(buf), stdin);
	buf[strlen(buf)-1] = '\0';
	student.id = atoi(buf);

	return 0;
}

