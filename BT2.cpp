#include <stdio.h>

int main(){
	char string[100];
	printf("Nhap vao mot chuoi ky tu : ");
	fgets(string,100,stdin);
	printf("Chuoi ky tu ban vua nhap la : \n");
	for (int i = 0;string[i]!= '\0';i++){
		printf("%c ", string[i]);
	}
	return 0;
}
