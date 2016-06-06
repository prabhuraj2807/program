#include <stdio.h>

int main(void) {
    int testcase;
    scanf("%d",&testcase);
    while(testcase--){
    	int a,b,temp;
    	scanf("%d%d",&a,&b);
    	temp=a;
    	a=b;
    	b=temp;
    	printf("Swap two numbers using temporary variable : %d %d\n",a,b);
    }
	return 0;
}
