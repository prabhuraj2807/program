#include <iostream>
#include<limits.h>
using namespace std;
int main() {
	int testcase;
	cin>>testcase;
	while(testcase--){
		int no;
		cin>>no;
	    if(no>=INT_MIN && no<=INT_MAX){
	    	cout<<"valid number"<<endl;
	    }
	    else{
	    	cout<<"Invalid Number"<<endl;
	    }
	}
	return 0;
}
