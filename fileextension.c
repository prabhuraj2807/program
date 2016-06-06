#include <stdio.h>
#include<string.h>
int main(void) {
	int testcase;
	scanf("%d\n",&testcase);
	while(testcase--){
		char str[1000];
		scanf("%s",str);
		int i;
		for(i=0;i<strlen(str);i++){
			if(str[i]!='.'){
				str[i]=' ';
				if(str[i+1]=='.'){
					break;
				}
			}
		}
		for(i=0;i<strlen(str);i++){
			if(str[i]!=' '){
				printf("%c",str[i]);
			}
		}printf("\n");
	}
	return 0;
}
