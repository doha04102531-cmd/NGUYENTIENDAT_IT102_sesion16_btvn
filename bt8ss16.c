#include<stdio.h>
#include<math.h>
#include <string.h>
#include<ctype.h>
int main(){
	char str[]="tran nguyen huong thao";
	
	int i=0;
	while(str[i] !='\0'){
		if(i==0||(str[i-1]==' '&&isalpha(str[i]))){
			str[i]=toupper(str[i]);
		}
		i++;
	}
	printf("chuoi sau khi format:%s",str);
}
