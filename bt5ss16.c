#include<stdio.h>
#include<math.h>
#include <string.h>
int main(){
	char str[]="Nguyen  Tien  Dat  Dat";
	printf("Chuoi:%s",str);
	
	printf("\nSo tu trong chuoi la:");
	
	int count=0;
	for(int i=0;i<strlen(str);i++){
		if(str[i]==' '||i==strlen(str)-1){
			count++;
	}
}
		printf("%d ",count);
	
		return 0;
}
