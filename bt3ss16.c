#include<stdio.h>
#include<math.h>
#include <string.h>
int main(){
	char str[]="12345";
	
	printf("Chuoi ban dau la:%s",str);
	printf("\nChuoi dao nguoc la:");
	
	for(int i= strlen(str)-1;i>=0;i--){
		printf("%c",str[i]);
	}
	return 0;
}
