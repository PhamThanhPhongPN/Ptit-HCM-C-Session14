#include <stdio.h>
#include <string.h> 
int main(){
	char string[100];
	printf("Nhap vao mot chuoi ky tu : ");
	fgets(string,100,stdin);
	printf("Chuoi ky tu ban vua nhap la : %s",string);
	printf("Do dai cua chuoi tren la : %d\n",strlen(string)-1);
	return 0;
}
