#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct STU {
	char name[20];
	int id;
	char sex;
	short score;
};
int p_name(struct STU student)
{
	printf("student name %s\n", student.name);
	return 0;
}
int p_id(struct STU student)
{
	printf("student id %d\n", student.id);
	return 0;
}
int p_sex(struct STU student)
{
	printf("student sex %c\n", student.sex);
	return 0;
}
int p_score(struct STU student)
{
	printf("student score %d\n", student.score);
	return 0;
}
int main(void)
{
	struct STU student;
	char buf[100];
	int (*p[4])(struct STU) = {p_name, p_id, p_sex, p_score};
	int num = 0;

	printf("please input name id sex score\n");	
	fgets(buf, sizeof(buf), stdin);
	buf[strlen(buf)-1] = '\0';
	strcpy(student.name, buf);
//	printf("name:%s\n", student.name);
	fgets(buf, sizeof(buf), stdin);
	buf[strlen(buf)-1] = '\0';
	student.id = atoi(buf);
//	printf("id :%d\n", student.id);
	fgets(buf, sizeof(buf), stdin);
	if (strlen(buf) > 2) {
		printf("please input m or w\n");
		exit(-1);
		}
	student.sex = buf[0];
//	printf("sex :%c\n", student.sex);
	fgets(buf, sizeof(buf), stdin);
	buf[strlen(buf)-1] = '\0';
	student.score = atoi(buf);
//	printf("score :%d\n", student.score);

	while (num != 5) {
	printf("please input search num 0, 1, 2, 3, num 5 is exit\n");
	fgets(buf, sizeof(buf), stdin);
	buf[strlen(buf)-1] = '\0';
	num = atoi(buf);
	if (num == 5)
		break;
	p[num](student);
	}


	return 0;






}
