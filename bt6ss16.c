#include<stdio.h>
#include<math.h>
#include <string.h>
int main(){
	char str[]="dattt31082007"; 
	
	printf("Chuoi:%s",str);
	printf("\nSo chu cai trong mang la:");
	
	int count=0;
	for(int i=0;i<strlen(str);i++){
	if(str[i]>='A'&&str[i]<='Z'||str[i]>='a'&&str[i]<='z'){
		count++;	
	}
}
	printf("%d",count);
	
	return 0;
	
	
	
}
