#include <stdio.h>
#include <string.h>
void reverseString(char string[]){
	for (int i = strlen(string)-1;i>=0;i-- ){
		printf("%c",string[i]);
	}
}
int main(){
	char string[100];
	printf("Nhap vao mot chuoi ky tu : ");
	fgets(string,100,stdin);
	printf("Chuoi ky tu dao nguoc la : ");
	reverseString(string);
	return 0;
}
