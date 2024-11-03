#include <stdio.h>


int main(){


	FILE *fp;
	
	int line = 0;
	int chr = 0;
	int word = 0;
	char buffer [100];
	char ch;
	char lastch = '0';
	fp = fopen("task2test.txt","r");

	while (fgets(buffer,100,fp)){
		line++;
	}
	
	fseek(fp,0,SEEK_SET);
	while ((ch = fgetc(fp)) !=EOF){
		chr++;
		if (ch == ' '&&lastch!=' '){
			word++;
		}
		lastch = ch;
	}
	
	printf("Line count = %d\n",line);
	printf("Character count = %d\n",chr);
	printf("Word count = %d\n",word);

	return 0;
}
