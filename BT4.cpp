#include <stdio.h>
#include <string.h> 

void GuessChar(char string[],char m,int count){
	for (int i = 0;string[i]!='\0';i++){
		if (string[i] == m){
			count++;
		}
	}
	if (count == 0){
		printf("Ky tu cua ban khong co trong string.");
	} else {
		printf("Ky tu cua ban xuat hien trong string %d lan.",count);
	}
}


int main(){
	char string[100];
	int count = 0;
	char m;
	printf("Nhap vao mot chuoi ky tu : ");
	fgets(string,100,stdin);
	printf("Nhap ky tu bat ky : ");
	scanf("%c",&m);
	GuessChar(string,m,count);
	return 0;
}
