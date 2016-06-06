#include <iostream>
#include<limits.h>
using namespace std;
int main() {
	int testcase;
	cin>>testcase;
	while(testcase--){
		int no;
		cin>>no;
	    if(no>=1 && no<=9){
	    	cout<<"valid number"<<endl;
	    }
	    else{
	    	cout<<"you entered number is not in range"<<endl;
	    }
	}
	return 0;
}
