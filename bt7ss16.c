#include<stdio.h>
#include<math.h>
#include <string.h>
int main(){
	char str[]="dat31082007@gmail.com"; 
	printf("Chuoi:%s",str);
	
	int count=0;
		for(int i=0;i<strlen(str);i++){
	if(str[i]>='A'&&str[i]<='Z'||str[i]>='a'&&str[i]<='z'){
		count++;	
	}
}
	printf("\nSo ky tu la ky cai:%d",count);
	
}
