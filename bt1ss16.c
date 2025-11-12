#include<stdio.h>
#include<math.h>
#include <string.h>
int main(){
	char name[100];
	
	printf("Hay nhap vao mot chuoi ky tu:");
	fgets(name,sizeof(name),stdin);
	name[strcspn(name, "\n")] = '\0';
	
	printf("Chuoi vua nhap la:%s",name);
	
	printf("\nDo dai cua chuoi la:%lu",strlen(name));
	return 0;
}
