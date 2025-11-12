#include<stdio.h>
#include<math.h>
#include <string.h>
int main(){
	char str[]="122333444455555";
	
	printf("Mang khai bao :%s",str);
	
	char n;
	printf("\nNhap ky tu can kiem tra:");
	scanf("%c",&n);
	
	int count=0;
	for(int i=0;i<strlen(str);i++){
		if(str[i]==n){
			count++;
		}
	}
	printf("Ky tu %c xuat hien %d lan trong chuoi",n,count);
	
	return 0;
}
