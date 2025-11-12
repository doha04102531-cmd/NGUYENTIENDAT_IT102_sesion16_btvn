#include<stdio.h>
#include<math.h>
#include <string.h>
int main(){
	char str[]="oitroioi";
	
	str[strcspn(str,"\n")]='\0';
	
	for(int i=0;i<strlen(str);i++){
	printf("%c ",str[i]);
	}
	return 0;
}
