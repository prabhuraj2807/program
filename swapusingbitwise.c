#include <stdio.h>

int main(void) {
    int testcase;
    scanf("%d",&testcase);
    while(testcase--){
    	int a,b;
    	scanf("%d%d",&a,&b);
    a^=b^=a^=b;
    	printf("Swap two numbers using temporary variable : %d %d\n",a,b);
    }
	return 0;
}
