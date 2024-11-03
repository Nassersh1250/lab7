#include <stdio.h>
#include <stdlib.h>

struct student {
	int id;
	char name[50];
	float gpa;
};


int main(){
	
	struct student sdnt[50];
	int n;
	printf("enter number of students\n");
	scanf("%d",&n);

	for (int i = 0; i<n; i++){

		
		printf("enter student %d id:\n",i+1);
		scanf("%d",&sdnt[i].id);

		printf("enter student %d name:\n",i+1);
		scanf("%s", sdnt[i].name);

		printf("enter student %d GPA:\n",i+1);
		scanf("%f",&sdnt[i].gpa);

	}


	for (int i = 0; i<n; i++){

		printf("Student %d ID: %d\n",i+1,sdnt[i].id);
		printf("Stdudent %d Name: %s\n",i+1, sdnt[i].name);
		printf("Student %d GPA: %f\n",i+1,sdnt[i].gpa);

	}


	return 0;


}



