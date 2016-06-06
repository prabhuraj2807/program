#include <stdio.h>
int cmp(const int *a,const int *b){
	return *(int *)a-*(int *)b;
}
int main(void) {
	int testcase;
	scanf("%d\n",&testcase);
	while(testcase--){
	int no;//number of elements
		scanf("%d",&no);//read no of elements
		int loop,array[no];
		for(loop=0;loop<no;loop++){
			scanf("%d",&array[loop]);
		}
		qsort(array,no,sizeof(int),cmp);
		printf("Minimum & Maximum element in array : %d  %d",array[0],array[no-1]);
	}
	return 0;
}
