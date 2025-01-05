#include <stdio.h>
#include <string.h>

void CountCharType(char string[]){
	int word=0;
	for (int i = 0;string[i]!= '\0';i++){
		if (string[i]>= 97 && string[i]<= 122 || string[i]>= 65 && string[i]<= 90){
			word++;
	}
}
	printf("So ky tu la chu cai la : %d\n", word);
}
int main(){
	char string[100];
	printf("Nhap vao mot chuoi ky tu : ");
	fgets(string,100,stdin);
	CountCharType(string);
	return 0;
}
