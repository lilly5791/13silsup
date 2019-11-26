#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct student
{
	int ID;
	char name[15];
	double grade;
};


int main(void) {
	
	struct student s1 = {21, "SuYoungKang", 4.3};
	
	return 0;
}
