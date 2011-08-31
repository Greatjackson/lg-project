#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student
{
	int id;
	char name[20];
	char sex;
}stu;
int p_id(stu student)
{	
	printf("id is %d\n",student.id);
	return 0;
}
int p_name(stu student)
{
	printf("name is %s\n",student.name);
	return 0;
}
int p_sex(stu student)
{
	printf("sex is %c \n",student.sex);
	return 0;
}
int main(void)
{	
	stu student;
	char buf[100];
	int (*p[4])(stu) = {p_id, p_name, p_sex};
	int num = 0;

	printf("please input the id name sex:\n");
	fgets(buf, sizeof(buf), stdin);
	buf[strlen(buf)-1] = '\0';
	student.id = atoi(buf);

	fgets(buf, sizeof(buf), stdin);
	buf[strlen(buf)-1] = '\0';
	strcpy(student.name, buf);
	
	fgets(buf, sizeof(buf), stdin);
	if(strlen(buf) > 2)
	{
		printf("please input w or m");	
		exit(-1);
	}
	student.sex = buf[0];

	while(num != 5)
	{	
	printf("please input search num 0, 1, 2, num 5 exit:\n");
	fgets(buf,sizeof(buf),stdin);
	buf[strlen(buf)-1] = '\0';
	num = atoi(buf);
	if(num == 5)
	break;
	p[num](student);

	}




	

}
