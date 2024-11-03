#include <stdio.h>

void encrypt(char *text, int shift){
	for (int i = 0; text[i]!='\0';i++){
		if (text[i] >= 'A' && text[i] <= 'Z'){
			text[i] = ((text[i]-'A' -shift +26)%26)+'A';
		}
		else if(text[i]>='a'&&text[i]<='z'){
			text[i] = ((text[i]-'a'-shift+26)%26)+'a';
		}
	}
}

void decrypt(char text, int shift){

	if (text >= 'A' && text <= 'Z'){
        	text = ((text-'A' -shift +26)%26)+'A';

	}
	else if(text >='a'&&text<='z'){
		text = ((text-'a'-shift+26)%26)+'a';
	}

}

int main(){
	
	char sel;
	char sel2;
	FILE *fp;
	char fname[50];
	char string[300];
	char ch;
	printf("Encryption or Decryption (e/d)\n");
	scanf(" %c",&sel);

	if (sel == 'e'){

		printf("from file or string (f/s)\n");
		scanf(" %c",&sel2);

		if (sel2 == 'f'){

			printf("input file name\n");
			scanf("%s",fname);

			fp = fopen(fname,"r");

			fscanf(fp, " %[^\n]%*c",string);

			encrypt(string,3);

			
			printf("%s",string);



		}

		else if (sel2 =='s'){
			printf("input string\n");
			scanf(" %[^\n]%*c",string);

			encrypt(string, 3);

			printf("%s",string);
		}


	}

	else if (sel == 'd'){

		printf("from file or string (f/s)\n");
		scanf(" %c",&sel2);

		if(sel2 == 's'){

			printf("input string\n");
			scanf("%s",string);

			encrypt(string, -3);

			printf("%s",string);
		}

		else if (sel2 == 'f'){
			printf("input file name\n");
                        scanf("%s",fname);

                        fp = fopen(fname,"r");

                        fscanf(fp, " %[^\n]%*c",string);

                        encrypt(string,-3);


                        printf("%s",string);
		}
		

	}



	return 0;
}



