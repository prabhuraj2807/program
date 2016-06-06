#include <stdio.h>
int main(void) {
	int testcase;
	scanf("%d\n",&testcase);
	while(testcase--){
	int no;//number of elements
		scanf("%d",&no);//read no of elements
		int loop,array,sum=0;
		for(loop=0;loop<no;loop++){
			scanf("%d",&array);
			sum=sum^array;
		}
		//qsort(array,no,sizeof(int),cmp);
		printf("Average in array : %d",sum);
	}
	return 0;
}
