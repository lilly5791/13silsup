#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct student
{
	int ID;
	char name[15];
	double grade;
};

int main(void) {
	
	struct student s = {21, "SuYoungKang", 4.3};
	
	s.ID = 123;
	strcpy(s.name, "Suyoung");
	s.grade = 4.3;
	
	printf("ID: %d\n", s.ID);
	printf("name: %s\n", s.name);
	printf("grade: %f\n", s.grade);
	
	
	return 0;
}
