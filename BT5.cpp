#include <stdio.h>
#include <string.h>

void UpperString(char string[]){
	int space=0;
	for (int i = 0;i<strlen(string);i++){
		if ((string[i-1] == ' ' && string[i] != ' ') || (i==0 && string[i]!=' ')){
			space++;
		}
	}
	printf("%d",space-1);
}


int main(){
	char string[100];
	printf("Nhap vao mot chuoi ky tu : ");
	fgets(string,100,stdin);
	UpperString(string);
	return 0;
}
