#include<stdio.h>
#include<math.h>
#include <string.h>
int main(){
	char str[]="tran nguyen huong thao";
	
	char letter ='a';
	
	int i =0,j =0;
	while(str[i]!='\0'){
		if(str[i]!=letter){
			str[j++]=str[i];
		}
		i++;
	}
	 str[j] = '\0';
	printf("chuoi sau khi xoa:%s",str);
	return 0;
}
